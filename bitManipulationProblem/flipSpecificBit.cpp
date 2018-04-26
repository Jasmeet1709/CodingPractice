// Given two nos N & i. Flip the ith bit in N. 
#include<iostream>
using namespace std;

int flipIthBit(int n, int i){
    
  return (n^(1<<i));
    
}

int main(){
	int n,i;
	cout<<"Enter number :";
	cin>>n;
	cout<<endl<<"Enter ith bit :";
	cin>>i;
	cout<<endl<<flipIthBit(n,i)<<endl;
	return 0;
}