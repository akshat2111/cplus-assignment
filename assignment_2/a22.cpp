#include <iostream>
#include <string>
using namespace std;

class C{
  
  int a;
  const int b;
  public:
  C (int x, int y):b(y){
     a= x;
  }
  void set(){
    a = 6; 
  }
  void disp () const{
    cout<<a<<" "<<b;

  }
};
int main ()
{
   C obj1(1,5);
   obj1.set();
   obj1.disp();
}