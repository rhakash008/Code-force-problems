#include<iostream>
using namespace std;

int main()
{
    int co = 0, ct = 0, a;
    string n;
    
    cin >> a;     
    cin >> n;      
    
    for(int i = 0; i < n.size(); i++){
        if(n[i] == 'A'){
            co++; 
        }
        else if(n[i] == 'D'){
            ct++; 
        }
    }
    
    if(co > ct){
        cout << "Anton" << endl;  
    }
    else if(ct > co){
        cout << "Danik" << endl;  
    }
    else{
        cout << "Friendship" << endl;  
    }
    
    return 0;
}
