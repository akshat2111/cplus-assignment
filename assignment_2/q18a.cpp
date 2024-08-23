#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;

class point{
     public:
    float x,y;
    point(float a, float b )
    {
        x = a;
        y =b;

    }
    float distance(point other )
    {
      return sqrt((other.x-x)*(other.x-x) +(other.y-y)*(other.y-y) );
    }

};
class Devices{

    public:
    int id;
    int range;
   point location;
    Devices(int i, int r, float x, float y):location(x,y)
    {
        id = i;
        range = r;
    }
    void print()
        {
            cout<<"ID: "<<id<<endl<<"Range: "<<range<<endl<<"Location: "<<location.x<<","<<location.y<<endl;
        }  

    void setLocation(float x, float y) 
    {
        location.x = x;
        location.y = y;
    }
    
    
};

int main()
{
    srand(time(0));

    Devices device[10]={
        Devices(1, 5+ rand()%100, rand()%100, rand()%100),
        Devices(2, 5+ rand()%100, rand()%100, rand()%100),
        Devices(3, 5+ rand()%100, rand()%100, rand()%100),
        Devices(4, 5+ rand()%100, rand()%100, rand()%100),
        Devices(5, 5+ rand()%100, rand()%100, rand()%100),
        Devices(6, 5+ rand()%100, rand()%100, rand()%100),
        Devices(7, 5+ rand()%100, rand()%100, rand()%100),
        Devices(8, 5+ rand()%100, rand()%100, rand()%100),
        Devices(9, 5+ rand()%100, rand()%100, rand()%100),
        Devices(10, 5+ rand()%100, rand()%100, rand()%100),
        
    };

    cout<<"Initial neighbours are: "<<endl;
    for (int i=0; i<10; i++)
    {
        bool isneighbour =false;
        cout<<"Device "<<device[i].id<<" neighbour: ";
        for(int j=i+1; j<10; j++)
        {
            float dist = device[i].location.distance(device[j].location);
            if (dist <= device[i].range )
            {
                cout<<device[j].id <<" ";
                 isneighbour = true;
            }
        }
        if(!isneighbour)
        {
            cout<<"No neoghbours.";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0; i<10; i++)
    {
        device[i].setLocation(rand()%100,rand()%100);
    }

    cout<<"New neighbours are: "<<endl;
    for(int i =0; i<10; i++)
    {
        bool isneighbour = false;
        cout<<"Device "<<device[i].id<<" neighbours: ";
        for(int j=i+1; j<10; j++)
        {
             float dist = device[i].location.distance(device[j].location);
             if( dist <= device[i].range)
             {
                cout<<device[j].id<<" ";
                isneighbour = true;
             }
        }
        if(!isneighbour)
        {
            cout<<"No neighbours.";
        }
        cout<<endl;
    }

}
