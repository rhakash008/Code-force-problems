#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n[5][5], i, j;
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>n[i][j];
            
            if(n[i][j] == 1)
            {
                cout <<abs(i-2)+abs(j-2)<<endl;
            }
        }
    }
   
    return 0;
}
