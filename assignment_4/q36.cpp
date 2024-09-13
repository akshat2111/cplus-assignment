#include<iostream>
#include <cmath>
using namespace std;

class point{
    int x, y;
    public:
    point(int a, int b)
    {
        x= a;
        y= b;
    }
    void set_x(int a)
    {
        x=a;
    }
    void set_y(int b)
    {
        y= b;
    }
    int get_x()
    {
        return x;
    }
    int get_y()
    {
        return y;
    }
    double distance(const point& other)const{
        double distance= (pow(x-other.x,2))+(pow(y-other.y,2));
        return sqrt(distance); 
    }
    point operator-(point &ob)
    {
        return point(x-ob.x, y-ob.y);
    }
    

};
int main ()
{
    point c1(1,2), c2(2,3);
    cout<<"The distance between the two points: "<<c1.distance(c2)<<endl;

    point c3 = c1-c2;
    cout<<"The point we get after subtracting: "<<"("<<c3.get_x()<<","<<c3.get_y()<<")"<<endl;


}