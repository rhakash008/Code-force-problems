#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count=0,j;
    string s;
    set<char> letters;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++){
        
        letters.insert(tolower(s[i]));
    }
    
        if(letters.size()==26){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    
    return 0;
}
