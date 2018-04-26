//Given an integer N.Make first set bit of binary representation of N to 0 and return the updated N.
#include<iostream>
using namespace std;

int turnOffFirstSetBit(int n){
  int c = n;
  int count = 0;
  while((c&1)==0){
    c >>= 1;
    count++;
  }
  
  int s = 1<<count;
  
  return n^s;
    
}


int main(){
	int n,i;
	cout<<"Enter number :";
	cin>>n;
	cout<<endl<<turnOffFirstSetBit(n)<<endl;
	return 0;
}
