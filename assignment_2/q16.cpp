#include<iostream>
#include <cmath>
using namespace std;

class point 
{
    int x,y,z;
    public:

    point (int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
  int distance (point x2)
    {
        int X = x2.x - x;
        int Y = x2.y - y;
        int Z = x2.z - z;
        
        return sqrt(X*X+Y*Y+Z*Z);
    }
      void print(point x2)
      {
        cout<<"the distance between the points is: "<<distance(x2)<<endl;
      }
    
};

int main ()
{
   point point1(1,2,3);
   point point2(4,5,6);
   point1.print(point2);
}
