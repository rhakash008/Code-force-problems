#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    if(a.size()!=b.size()){
        
          return 1;
    }
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
    return 0;
}
