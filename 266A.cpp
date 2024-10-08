#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,count=0,n;
    string s;
    cin>>n;
    cin>>s;
    
    for(i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}
