//Given an integer N. Check if N is power of 2 or not. Return true or false accordingly.
#include<iostream>
using namespace std;

bool isPowerOf2(int n){
    
    if((n&(n-1)) == 0){
      return true;
    }
    return false;
    
}

int main(){
	int n,i;
	cout<<"Enter number :";
	cin>>n;
	cout<<endl<<isPowerOf2(n)<<endl;
	return 0;
}