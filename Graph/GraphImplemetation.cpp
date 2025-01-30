#include<iostream>
#include<unordered_map>
#include<list>
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
};



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
    return 0;
}