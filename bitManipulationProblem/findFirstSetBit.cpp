//Given an integer N. Return an integer M, in which only one bit is set which at position of lowest set bit of N (from right to left).
#include<iostream>
using namespace std;

int returnFirstSetBit(int n){

  int count = 0;
  while((n&1)==0){
    n  >>= 1;
    count += 1;
  } 
  return (1<<count);
    
}


int main(){
	int n,i;
	cout<<"Enter number :";
	cin>>n;
	cout<<endl<<returnFirstSetBit(n)<<endl;
	return 0;
}