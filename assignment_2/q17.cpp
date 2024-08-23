#include <iostream>
using namespace std;

class geometrical
{
    int x ,y;
    public:

    geometrical(int a, int b):x(a), y(b)
    {}
    
    void printarea()
    {
       int area = x*y;
       cout<< "area of the rectangles is: "<< area <<endl;

    }
};

int main ()
{
    geometrical first(3,6);
    geometrical second(4,7);
    geometrical third(4,6);
    geometrical fourth(18,7);

    first.printarea();
    second.printarea();
    third.printarea();
    fourth.printarea();

}