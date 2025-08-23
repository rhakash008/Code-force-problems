#include <bits/stdc++.h>
using namespace std;
#define ii int
#define ll long long int
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() 
{
    vector<int> v(3);
    map<int,int>mp;
    
    for(ii i=0; i<3; i++){
        cin>>v[i];        
    }
    
    for(int k: v){
        mp[k]++;
    }

    for(auto x : mp){
        if(x.second ==1){
            cout<<x.first<<endl;
        }
    }
    
}

int main() {
    fast_io
    ii t; cin>>t;
    while(t--){
    solve();}
    return 0;
}
