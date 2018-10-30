
#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	//cout<< __builtin_popcount (1099511627776)<<endl;
	while(t--){
	    long int num;
	    cin>>num;
	    if((num != 0) && ((num &(num - 1)) == 0))
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
