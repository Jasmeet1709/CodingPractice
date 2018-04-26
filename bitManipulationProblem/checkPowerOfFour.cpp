//Given an integer N. Check if N is power of 4 or not. Return true or false accordingly.
#include<iostream>
using namespace std;

bool isPowerOf4(int n){
    
    int count=0;
    if((n&(n-1))==0 && n>0 ){
      while(n > 1)
     {
       n  >>= 1;
       count += 1;
     }    
      return (count%2 == 0)? true :false;
    }
    return false;
    
}

int main(){
	int n,i;
	cout<<"Enter number :";
	cin>>n;
	cout<<endl<<isPowerOf4(n)<<endl;
	return 0;
}