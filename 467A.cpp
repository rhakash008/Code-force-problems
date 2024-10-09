#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, p,c,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p>>c;
        if((c-p)> 1){
            count++;
        }
        else{
            count=count;
        }
    }
    cout<<count;
return 0;
}
