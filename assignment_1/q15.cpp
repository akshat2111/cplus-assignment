#include<iostream>
using namespace std;

int add(int x, int y =0, int z=0)
{
    return x+y+z;
}

int main()
{
    cout<<add(1)<<endl;
    cout<<add(1,2)<<endl;
    cout<<add(1,2,3)<<endl;
}