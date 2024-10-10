#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,d,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a%b==0){
            cout<<"0"<<endl;
        }
        else{
            d=((a/b)+1)*b;
            count=d-a;
            cout<<count<<endl;
        }
    }
    return 0;
}
