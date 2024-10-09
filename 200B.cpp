#include<bits/stdc++.h>
using namespace std;


int main(){
    double n,v,c=0;
    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        c=c+v;
    }
    cout<<c/n;
    return 0;
}
