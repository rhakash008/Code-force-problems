#include<iostream>
#include<cstring>
using namespace std;

class A
{
    int i, a, length;
    char w[100];  

public:
    void process() {
        cin >> a;  
        
        for(i = 0; i < a; i++) {
            cin >> w; 
            length = strlen(w); 

            if(length > 10) {
               
                cout << w[0] << length - 2 << w[length - 1] << endl;
            }
            else {
              
                cout << w << endl;
            }
        }
    };
};

int main()
{
    A ob;  
    ob.process(); 
    return 0;
}
