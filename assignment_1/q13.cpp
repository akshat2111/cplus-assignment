#include <iostream>
#include <string>
using namespace std;

int maxm (int x, int y, int z)
{
    if(x>y &&x>z)
    return x;
    else if(y>x&&y>z)
    return y;
    else
    return z;
}
double maxm (double x, int y, int z)
{
    if(x>y &&x>z)
    return x;
    else if(y>x&&y>z)
    return y;
    else
    return z;
}

int main ()
{
    int x=3;
    int y= 4;
    int z= 5;
   int result =  maxm(x,y,z);

   cout<<result<<endl;

}