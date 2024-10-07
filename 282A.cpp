#include<iostream>
using namespace std;

class A
{
  int i,n,x=0;
  string s;
  public:
  void show()
  {
     cin>>n;
     for(i=0;i<n;i++){
         cin>>s;
         if(s=="X++" || s=="++X")
         {
             x++;
         }
         else{
             x--;
         }
   }
  cout<<x<<endl;
  }
 
};
int main()
{
    A ob;
    ob.show();
 
    return 0;
}
