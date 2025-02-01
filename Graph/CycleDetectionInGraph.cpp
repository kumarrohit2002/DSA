//https://bit.ly/3M4jIX5

#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
using namespace std;

bool iscycleBfs(int node,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adjList){
    unordered_map<int,int> parent;
    queue<int> q;
    q.push(node);
    parent[node]=-1;
    visited[node]=true;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        for(auto neighbor:adjList[front]){
            if(visited[neighbor]==true && neighbor!=parent[front]){
                return true;
            }else if(!visited[neighbor]){
                q.push(neighbor);
                visited[neighbor]=true;
                parent[neighbor]=front;
            }
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m){
    // Write your code here.
    unordered_map<int,list<int>> adjList;
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    //handel componet of graph
    unordered_map<int,bool> visited;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            if(iscycleBfs(i,visited,adjList)) return "Yes";
        }
    }
    return "No";
}
