#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0 || b==0){
        return 0;
    }
    
    if(a==b){
        return a;
    }
    
    if(a>b){
        return gcd(a-b,b);
    }
    
    return gcd(a, b-a);
}


int main() {
    int t;
    cin>>t;
    while(t--){
        int a;
        int b;
        cin>>a>>b;
        
        int hcf = gcd(a,b);
        cout<< ((a*b)/hcf)<<" "<<hcf<<endl;
    }
    return 0;
}