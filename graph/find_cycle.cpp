



#include<bits/stdc++.h>
using namespace std;

// coloring method
// 0 -> not visited (white)
// 1 -> in stack or being explored (grey)
// 2 -> visited (Black)


void isCycle(vector<vector<int>> graph,int u,vector<int>&vis) {

	vis[u] = 1;


	for(int i  = 0; i < graph[u].size(); i++) {

		if(vis[graph[u][i]] == 1) {
			
			return true;
		}
		else if(vis[graph[u][i]] != 2) {;
			if(isCycle(graph,graph[u][i],vis))
				return true;
		}
	}

	vis[u] = 2;

	return false;

}

int main() {

	int V; cin>>V;
	int E; cin>>E;
	vector<vector<int>> graph(V);
	for(int i = 0; i < E; i++) {
		int x,y;
		cin>>x>>y;
		graph[x].push_back(y);
	}



	vector<int> visited(V,0);
	for(int i = 0; i < V; i++) {
		
		if(isCycle(graph,i,visited,parent)){
			cout<<"We have cycle\n";
      break;
		}
		
	}

	
	

}


	
