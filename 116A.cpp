#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,a,b,passanger=0,mx=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b;
        passanger=passanger-a;
        passanger=passanger+b;
        
        mx=max(mx,passanger);
    }
    cout<<mx;
    return 0;
}
