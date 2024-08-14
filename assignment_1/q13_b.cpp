#include <iostream>
#include <string>
using namespace std;

int maxm(int a[10])
{
    int max;
     max = a[0];
    for(int i =0; i<10; i++)
    {
        if (max<a[i])
        {
            max = a[i];
        }
    }
    return max;
}

double maxm(double a[10])
{
    double max;
     max = a[0];
    for(int i =0; i<10; i++)
    {
        if (max<a[i])
        {
            max = a[i];
        }
    }
    return max;
}

int main ()
{
    int a[10] = {1,2,3,4,5,6,17,8,9,12};
    int  max =  maxm(a);
    cout<<max<<endl;
    double b[10] = {1,2,3,4,4.5,34.5,3,5,12};
    double max0= maxm(b);
    cout<<max0;
}