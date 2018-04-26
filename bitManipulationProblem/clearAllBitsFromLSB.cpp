//Given two integers N and i. Clear all bits from LSB to ith bit (start i from right to left) and return the updated N.
#include<iostream>
using namespace std;

int clearAllBits(int n, int i){
    
  int m =~((1<<(i+1))-1);
  
  return n&m;
    
}

int main(){
	int n,i;
	cout<<"Enter number :";
	cin>>n;
	cout<<endl<<"Enter ith bit :";
	cin>>i;
	cout<<endl<<clearAllBits(n,i)<<endl;
	return 0;
}