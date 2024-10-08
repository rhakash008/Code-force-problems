#include<iostream>
using namespace std;

int main()
{
    int i,length,count=0;    
    string s;
    cin>>s;
    int u=0,l=0;
    for(i=0;i<s.size();i++){
        if(isupper(s[i])){
            u++;
        }
        else{
            l++;
        }
    }
    if(u==l){
        for(i=0;i<s.size();i++){
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
            }
        }
        cout<<s<<endl;
    }
    if(u>l){
        for(i=0;i<s.size();i++){
            if(islower(s[i])){
                s[i]=toupper(s[i]);
            }
        }
        cout<<s<<endl;
    }
    if(l>u)
    {for(i=0;i<s.size();i++){
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
