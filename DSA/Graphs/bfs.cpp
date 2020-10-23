// BFS
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class graph{
	int V;
	list<int> *adj;
	public:
	graph(int V);
	void addEdge(int v,int w);
	void bfs(int s);
};
graph::graph(int V){
	this->V=V;
	adj=new list<int>[V];
}
void graph::addEdge(int v,int w){
	adj[v].push_back(w);
}
void graph::bfs(int s){
	int i;
	bool *vis=new bool[V];
	for(i=0;i<V;i++)
	vis[i]=false;
	list<int>q;
	vis[s]=true;
	q.push_back(s);
	
	while(!q.empty()){
		list<int>::iterator it;
		int u=q.front();
		cout<<u<<" ";
		q.pop_front();
		for(it=adj[u].begin();it!=adj[u].end();it++){
			if(vis[*it]==false){
				vis[*it]=true;
				q.push_back(*it);
			}
			
		}
	}
}
int main(){
	 graph g(4); 
    g.addEdge(0,1); 
    g.addEdge(0,2); 
    g.addEdge(1,2); 
    g.addEdge(2,0); 
    g.addEdge(2,3); 
    g.addEdge(3,3); 
  
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n"; 
    g.bfs(2); 
  
    return 0; 
}
