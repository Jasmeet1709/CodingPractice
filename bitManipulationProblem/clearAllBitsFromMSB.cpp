//Given two integers N and i. Clear all bits from MSB to ith bit (start i from right to left) and return the updated N.
#include<iostream>
using namespace std;

int clearAllBits(int n, int i){
    
  int a =0;
  for(int j=0;j<i;j++){
    a += 1<<j; 
  }
  return n&a;
    
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