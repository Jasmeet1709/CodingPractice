//Given two integers N and i. Make ith bit of binary representation of N to 0 and return the updated N.
#include<iostream>
using namespace std;

int turnOffIthBit(int n, int i){
    
  int z = n & (1<<i);
  if(z != 0){
    return (n^(1<<i));
  }
  return n;
    
}

int main(){
	int n,i;
	cout<<"Enter number :";
	cin>>n;
	cout<<endl<<"Enter ith bit :";
	cin>>i;
	cout<<endl<<turnOffIthBit(n,i)<<endl;
	return 0;
}