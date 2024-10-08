#include<iostream>
using namespace std;


int main()
{
    int M,N,a,s,d;
    cin>>M>>N;
    s=M*N;
    if(s%2==0){
        a=s/2;
        cout<<a;
    }
    else if(s%2!=0)
    {
        s=s-1;
        a=s/2;
        cout<<a;
    }
    return 0;    
}
