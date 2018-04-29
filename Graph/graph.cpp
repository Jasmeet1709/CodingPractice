// DFS
#include<iostream>
using namespace std;

void print(int** edges,int n,int sv,bool* visited){
	cout<<sv<<"->";
	visited[sv] = true;
	for(int i=0;i<n;i++){
		if(i == sv){
			continue;
		}
		if(edges[sv][i] == 1){
			if(visited[i]){
				continue;
			}
			print(edges,n,i,visited);
		}

	}
}
void DFS(int** edges,int n){
	bool* visited = new bool[n];
	for(int i=0;i<n;i++){
		visited[i] = false;
	}

	for(int i=0;i<n;i++){
		if(!visited[i])
			print(edges,n,i,visited);
	}

	delete[] visited;
}
void destroyTwoDimenArrayOnHeapUsingDelete(int ** ptr, int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		delete [] ptr[i];
	}
	delete [] ptr;
}

int main(){
	int n;
	int e;
	cin>>n>>e;
	int** edges = new int*[n];
	for(int i=0;i<n;i++){
		edges[i] = new int[n];
		for(int j=0;j<n;j++){
			edges[i][j] = 0;
		}
	}

	for(int i=0;i<e;i++){
		int f,s;
		cin>>f>>s;
		edges[f][s] = 1;
		edges[s][f] = 1;
	}

	DFS(edges,n);

	destroyTwoDimenArrayOnHeapUsingDelete(edges,n,n);

	return 0;
}