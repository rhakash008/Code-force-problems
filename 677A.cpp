#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,count=0,d;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>d;
   
    if(d<=h){
        count++;
    }
    else{
        count +=2;
    }
    }
    cout<<count<<endl;
    return 0;
}
