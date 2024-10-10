#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, level;
    set<int> levels;  
    cin >> n;  
    cin >> x;  
    for (int i = 0; i < x; i++) {
        cin >> level;
        levels.insert(level); 
    }

   
    cin >> y;  
    for (int i = 0; i < y; i++) {
        cin >> level;
        levels.insert(level);  
    }

    
    if (levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
