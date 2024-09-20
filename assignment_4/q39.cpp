#include <iostream>
using namespace std;

class INT{
    int i;
    public:
    INT (int a):i(a){}


    INT operator++()
    {
        ++i;
        return *this;
    }
    INT operator++(int)
    {
        INT temp= *this;
        (this->i)++;
        return temp;

    }
    operator int ()
    {
        return i;
    }

};

int main ()
{
    int x = 3; 
    INT y = x;
     y++ = ++y;
     x= y;
     cout<<"x: "<<x<<endl;
     return 0;
}