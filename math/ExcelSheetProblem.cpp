/*
Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
*/

#include<bits/stdc++.h> 
#define MAX 50 
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    char str[MAX];  
        int i = 0; 
  
        while (n>0) 
        { 
            int rem = n%26; 
      
            if (rem==0) 
            { 
                str[i++] = 'Z'; 
                n = (n/26)-1; 
            } 
            else 
            { 
                str[i++] = (rem-1) + 'A'; 
                n = n/26; 
            } 
        } 
        str[i] = '\0'; 
      
        reverse(str, str + strlen(str)); 
        cout << str << endl; 
	}
	return 0;
}