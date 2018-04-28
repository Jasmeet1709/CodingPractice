#include<iostream>
#include <queue>
using namespace std;

void print(int** edges,int n,int sv){
	queue<int> q ;
	bool* visited = new bool[n];
	for(int i=0;i<n;i++){
		visited[i] = false;
	}
	q.push(sv); 
	
	visited[sv] = true;
	while(!q.empty()){
		int curr = q.front();
		q.pop();
		cout<<curr<<"->";
		for(int i=0;i<n;i++){
			if(i == curr){
				continue;
			}
			if(edges[curr][i] == 1 && !visited[i]){
				q.push(i);
				visited[i] = true;
			}
		}		
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

	
	print(edges,n,0);
	destroyTwoDimenArrayOnHeapUsingDelete(edges,n,n);
	
	return 0;
}