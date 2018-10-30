// Check if given no N is odd or even

#include<iostream>
using namespace std;

void checkOddOrEven(int n){
    
    if(n&1){
      cout<<"Odd"<<endl;
    }else{
      cout<<"Even"<<endl;
    }
    
}

int main(){
	int n,i;
	cout<<"Enter number :";
	cin>>n;
	checkOddOrEven(n);
	return 0;
}