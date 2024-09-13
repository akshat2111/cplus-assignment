#include<iostream>
using namespace std;
#include<cmath>

class quadratic{
    int a,b,c;
    public:
    quadratic(int x, int y, int z)
    {
        a= x;b=y;c=z;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
    int getc()
    {
        return c;
    }
    quadratic operator+(quadratic &ob)
    {
        return quadratic(a+ob.a, b+ob.b, c+ob.c);
    }
    quadratic display()
    {
        cout<<"The result of the addition is"<<"("<<geta()<<"x^2,"<<getb()<<"x,"<<getc()<<")"<<endl;
    }
    friend void operator<<(ostream &os, quadratic ob)
    {
        os<<ob.a;
        os<<ob.b;
        os<<ob.c;
    }
};
int main ()
{
    quadratic q1(2,3,4), q2(5,3,6);
    quadratic q3 = q1+q2;
    q3.display();
    cout<<q3.display();
}