#include<bits/stdc++.h>
using namespace std;

class graph{
	

	int v;
	list<int> *adj;
public:
	graph(int v){
		this->v=v;
		adj=new list<int>[v];
		
	}
	
	void addEdge(int u,int v){
		adj[u].push_back(v);
		adj[v].push_back(u);
	
	}
	
	void print(){
		for(int i=0;i<5;i++){
			for(auto it=adj[i].begin();it!=adj[i].end();it++)
			cout<<(*it)<<" ";
			
			cout<<endl;
		}
	}
	
	
	
	
};

int main(){
	graph g(5);
	 g.addEdge(0,1); 
    g.addEdge(0,4); 
    g.addEdge(1,2); 
    g.addEdge(1,3); 
    g.addEdge(1,4); 
    g.addEdge(2,3); 
    g.addEdge(3,4);
  	g.print();  
    
    return 0;
}
