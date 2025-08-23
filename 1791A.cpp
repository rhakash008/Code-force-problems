#include <bits/stdc++.h>
using namespace std;
#define ii int
#define ll long long int
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() 
{
    int n;
    string s ="codeforces";
    cin>>n;
    for(ii i = 0;i < n; i++) {
        char c;
        cin>>c;
    
        if(s.find(c) != string::npos){
            cout<<"YES"<<endl;
        }
        else 
            cout<<"NO"<<endl;
    }
}

int main() {
    fast_io
    solve();
    return 0;
}
