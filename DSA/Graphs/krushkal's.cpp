//Krushkal's algo
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef pair<int,int>ipair;

class graph{
	int V,E;
vector<pair<int,ipair>>edges;
public:
	
	graph(int V,int E);
	void addEdge(int w,int u,int v);
	int krush();
	
};
graph::graph(int V,int E){
	this->V=V;
	this->E=E;
	
}
void graph::addEdge(int w,int u,int v){
	edges.push_back({w,{u,v}});
}

struct disjoint{
	int n;
	int *parent;
	int *rank;
	disjoint(int n){
		this->n=n;
		parent=new int[n+1];
		rank=new int[n+1];
		int i;
		for(i=0;i<n;i++){
			parent[i]=i;
			rank[i]=0;
		}
	}
	int find(int u){
		if(parent[u]!=u)
		parent[u]=find(parent[u]);
		return parent[u];
	}
	void merge(int x,int y){
		x=find(x);
		y=find(y);
		if(rank[x]>rank[y])
		parent[y]=x;
		else
			parent[x]=y;
		if(rank[x]==rank[y])
		rank[y]++;
	}
};


int graph::krush(){
	int mstwt=0;
	sort(edges.begin(),edges.end());
	disjoint ds(V);
	vector<pair<int,ipair>>::iterator it;
	for(it=edges.begin();it!=edges.end();it++){
		int u=it->second.first;
		int v=it->second.second;
		int set_x=ds.find(u);
		int set_y=ds.find(v);
		if(set_x!=set_y){
			mstwt+=it->first;
			ds.merge(set_x,set_y);
	d	}
	}
	return mstwt;
}
int main(){
 int V = 9, E = 14; 
    graph g(V, E); 
  
    //  making above shown graph 
    g.addEdge(0,1,4); 
    g.addEdge(0,7,8); 
    g.addEdge(1,2,8); 
    g.addEdge(1,7,11); 
    g.addEdge(2,3,7); 
    g.addEdge(2,8,2); 
    g.addEdge(2,5,4); 
    g.addEdge(3,4,9); 
    g.addEdge(3,5,14); 
    g.addEdge(4,5,10); 
    g.addEdge(5,6,2); 
    g.addEdge(6,7,1); 
    g.addEdge(6,8,6); 
    g.addEdge(7,8,7); 
  
    
    int mst_wt=g.krush(); 
  
    cout<<"\nWeight of MST is"<<mst_wt; 
  
    return 0; 
} 	

