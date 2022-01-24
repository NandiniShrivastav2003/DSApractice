#include<iostream>
#include<vector>
#include<queue>
#include<iterator>
#include<list>
using namespace std;
void addEdge2(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
}
//topological sort using Kahn's BFS based algorithm
void TopSorting(vector<int>adj[],int v){
    vector<int>inDeg(v,0);
    queue<int>q;
    for(int i=0;i<v;i++){
        for(auto x:adj[i]){
            inDeg[x]++;
        }
     }
 
    for(int i=0;i<v;i++){
        if(inDeg[i] == 0){
        q.push(i);
    }
    }
    while(!q.empty()){
        int u=q.front();
      cout<<u<<" ";
        q.pop();
        for( auto v:adj[u]){
            if(--inDeg[v]==0){
                q.push(v);
            }
        }
    }
}
int main(){
    int v=6;
    vector<int>adj[v];
    addEdge2(adj,0,1);
addEdge2(adj,0,2);
addEdge2(adj,1,3);
addEdge2(adj,2,3);
addEdge2(adj,3,4);
addEdge2(adj,3,5);
//printGraph(adj,v);
TopSorting(adj,v);
    return 0;
}