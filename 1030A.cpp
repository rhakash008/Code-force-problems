#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, p;
    bool ans = false;
        cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> p;
        if(p == 1) {
            ans = true;
        }
    }
    
    if(ans) {
        cout << "HARD";
    } else {
        cout << "EASY";
    }
return 0;
}
