#include<iostream>
using namespace std;

class A
{
  int a,p,v,t,i,count=0;
  public:
  void show()
  {
      cin>>a;
      for(i=0;i<a;i++){
          cin>>p>>v>>t;
          int sum =p+v+t;
          if(sum>=2){
              count=count+1;
          }
      }
      cout<<count;
  }
 
};
int main()
{
    A ob;
    ob.show();
 
    return 0;
}
