#include<iostream>
#include <string>
using namespace std;

void printvector(int v[5])
{
    cout<<"Vector elements:";
    for(int i = 0; i<5; i++)
    {
        cout<< v[i]<<" ";
    }
    cout<<endl;
}
void printmatrix(int m[2][3])
{
    cout<<"matrix elements: "<<endl;
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<< m[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main ()
{
    int vector[5]= { 1,2,3,4,5};
    printvector(vector);

    int matrix[2][3]= {{1,2,3},{4,5,6}};

    printmatrix(matrix);

}