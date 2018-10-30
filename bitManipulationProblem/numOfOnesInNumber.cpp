// find no. of 1's in given number N.

#include<iostream>
using namespace std;

int returnNoOfOnes(int n){
  
  int count=0;
  while(n>0){
  	n = n&(n-1);
  	count++;
  }

  return count;
    
}


int main(){
	int n,i;
	cout<<"Enter number :";
	cin>>n;
	cout<<endl<<returnNoOfOnes(n)<<endl;
	return 0;
}