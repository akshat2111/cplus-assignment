#include<iostream>
using namespace std;
#define PI 3.14
class Two_d_shapes{
    protected:
    int x;
    int y;
    public:
    virtual void printarea()=0;
    virtual void printperimeter()=0;
};
class rectangle:public Two_d_shapes{
    public:
     rectangle(int l, int b){
        x= l; 
        y=b;
     }
     void printperimeter() override
     {
        int perimeter = 2 * (x+y);
        cout<<"The perimeter of the rectangle is: "<<perimeter<<endl;
     }
     void printarea() override
     {
        cout<<"The area of the rectangle is: "<<x*y<<endl;
     }

};
class circle: public Two_d_shapes{

    int r;
    public:

    circle(int radius):r(radius){}
    void printperimeter() override
    {
        cout<<"The circumference of the circle of radius "<<r<<" is: "<<2*PI*r<<endl;
    }
    void printarea() override
    {
        cout<<"The area of the circle of radius "<<r<<" is: "<<PI*r*r<<endl;
    }
};

int main ()
{
    Two_d_shapes *shape[5];
    shape[0] = new rectangle(2,3);
    shape[1]= new rectangle(3,5);
    shape[2]=new circle(3);
    shape[3]=new circle(7);
    shape[4]=new circle(9);

    for(int i=0; i<5; i++)
    {
        shape[i]->printarea();
        cout<<endl;
        shape[i]->printperimeter();
        cout<<endl;
    }
    for(int i=0; i<5; i++)
    {
        delete shape[i];
    }




}