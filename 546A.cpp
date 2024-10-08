#include<iostream>
using namespace std;

int main()
{
    int k,n,w,cost;
    cin>>k>>n>>w;
    cost=k*((w*(w+1))/2);
    if(n>cost)
    {
        cout<<"0";
    }
    else{
        cout<<cost-n;
    }
    return 0;
}
