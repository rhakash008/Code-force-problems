#include <bits/stdc++.h>
using namespace std;
#define ii int
#define ll long long int
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() 
{
    int n,a[3];
    cin>>n;
    for(ii i = 0;i < n; i++) {
       for(ii j=0;j<3;j++){
        cin>>a[j];
       }
       sort(a, a + 3);
       cout<<a[1]<<endl;
    } 
}

int main() {
    fast_io
    solve();
    return 0;
}
