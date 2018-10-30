//Given two integers N and i. Make ith bit of binary representation of N to 1 and return the updated N.
#include<iostream>
using namespace std;

int turnOnIthBit(int n, int i){
    
  return (n|(1<<i));
    
}

int main(){
	int n,i;
	cout<<"Enter number :";
	cin>>n;
	cout<<endl<<"Enter ith bit :";
	cin>>i;
	cout<<endl<<turnOnIthBit(n,i)<<endl;
	return 0;
}