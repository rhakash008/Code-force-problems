#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,count=0;
    string first= "",second= "";
     cin>>n;
    while(n--)
    {
        cin>>second;
        if(first != second){
            count++;
            first=second;
        }
    }
    cout<<count<<endl;
return 0;
}
