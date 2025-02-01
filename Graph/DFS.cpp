#include<iostream>
#include<unordered_map>
#include<list>
#include<stack>
using namespace std;

template<typename T>

class Graph{
    unordered_map<T,list<T>> adj;
    public:
        void addEdge(T u,T v,bool direction){
            //direction == true -> directed Graph
            //direction == false -> undirected Graph

            //create edge
            adj[u].push_back(v);
            if(direction==0) adj[v].push_back(u);
        }

        void printAdjList(){
            for(auto i:adj){
                cout<<i.first<<"-> ";
                for(auto j:i.second){
                    cout<<j<<", ";
                }
                cout<<endl;
            }
        }

        unordered_map<T,list<T>> getAdjList(){
            return adj;
        }
};  


void helper(int node,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adjList){
    cout<<node<<" ";
    visited[node]=true;
    for(auto i:adjList[node]){
        if(!visited[i]){
            helper(i,visited,adjList);
        }
    }
    return;
}


void dfsUsingStack(int firstNode,unordered_map<int,list<int>> &adjList){
    stack<int> st;
    st.push(firstNode);
    unordered_map<int,bool> visited;
    visited[firstNode]=true;
    cout<<"DFS of using Graph: ";
    while(!st.empty()){ 
        int top=st.top();
        st.pop();
        cout<<top<<" ";
        for(auto i:adjList[top]){
            if(!visited[i]){
                st.push(i);
                visited[i]=true;
            }
        }
    }
    cout<<endl;
}

void dfs(unordered_map<int,list<int>> &adjList){
    unordered_map<int,bool> visited;
    int firstNode=adjList.begin()->first;
    helper(firstNode,visited,adjList);
    cout<<endl;
    dfsUsingStack(firstNode,adjList);
}


int main(){
    int n,m;
    cout<<"Enter the no of Nodes: ";
    cin>>n;
    cout<<"Enter the no of Edges: ";
    cin>>m;

    Graph<int> g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }

    g.printAdjList();

    unordered_map<int,list<int>> adj=g.getAdjList();

    dfs(adj);

    return 0;
}


// Enter the no of Nodes: 5
// Enter the no of Edges: 6
// 0 1
// 1 2
// 2 3
// 3 4
// 3 1
// 4 0

// 4-> 3 0 
// 0-> 1 4 
// 1-> 0 2 3 
// 2-> 1 3 
// 3-> 2 4 1 