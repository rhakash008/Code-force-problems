#include<iostream>
#include<bits/stdc++.h>
//#include<algorithm> // For sort()
#include<string>
using namespace std;

int main()
{
    string a, b="";
    cin>>a;

    
    for(int i=0;i<a.size();i++)
    {
        if(a[i] != '+'){
            b += a[i];
        }
    }
    sort(b.begin(), b.end());
    cout << b[0]; 
    for(int i = 1; i < b.size(); i++)  
    {
        cout << '+' << b[i];
    }
    cout << endl;
    return 0;
}
