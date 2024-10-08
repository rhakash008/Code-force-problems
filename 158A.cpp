#include<iostream>
#include<vector>  
using namespace std;

int main()
{
    int i, n, k, count = 0;
    cin >> n >> k;
    vector<int> s(n);  
   
    for(i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    
    for(i = 0; i < n; i++)
    {
        if(s[i] >= s[k-1] && s[i]>0)  
        {
            count++;
        }
    }

    cout << count;  
    return 0;
}
