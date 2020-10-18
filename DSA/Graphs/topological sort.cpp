//topological sort using dfs
#include<bits/stdc++.h>
#include<stack>
using namespace std;
class graph{
	int V;
	list<int> *adj;
public:
	graph(int V);
	void addEdge(int v,int w);
	void top_util(int s,bool vis[],stack<int>&st);
	void topo();
};
graph::graph(int V){
	this->V=V;
	adj=new list<int>[V];
	}
void graph::addEdge(int v,int w){
	adj[v].push_back(w);
}
void graph::top_util(int s,bool vis[],stack<int>&st){
	vis[s]=true;
	list<int>::iterator it;
	for(it=adj[s].begin();it!=adj[s].end();it++)
	if(vis[*it]==false)
	top_util(*it,vis,st);
	st.push(s);
}
void graph::topo(){
	bool *vis=new bool[V];
	int i;
	stack<int>st;
	for(i=0;i<V;i++)
	vis[i]=false;
	for(i=0;i<V;i++)
	if(vis[i]==false)
	top_util(i,vis,st);
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
}
int main(){
	  graph g(6); 
    g.addEdge(5,2); 
    g.addEdge(5,0); 
    g.addEdge(4,0); 
    g.addEdge(4,1); 
    g.addEdge(2,3); 
    g.addEdge(3,1); 
  
    cout<<"Following is a Topological Sort of the given graph \n"; 
    g.topo(); 
  
    return 0; 
}
