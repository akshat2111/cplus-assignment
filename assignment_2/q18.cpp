#include<iostream>
using namespace std;

class wireless_devices
{
    int id,range_in_m;
    float longitude, latitude;

    public:

    wireless_devices ( int id, int range, float longitude, float latitude )
    {
        this-> id = id;
        this-> range_in_m= range;
        this-> longitude = longitude;
        this-> latitude = latitude;
    }

    void print()
    {
        cout<< "ID: "<< id<<endl<<"Range: "<< range_in_m <<endl<< "Longitude: "<< longitude<<endl<<"Latitude: " << latitude << endl;
    }

    int getrange ()
    {
        return range_in_m;

    }
};

int main ()
{
    wireless_devices device1(21, 100, 21.0098, 15.6969 );
    wireless_devices device2(22, 200, 21.1098, 16.6969 );
    wireless_devices device3(23, 300, 21.2098, 17.6969 );
    wireless_devices device4(24, 400, 21.3098, 18.6969 );
    wireless_devices device5(25, 500, 21.4098, 19.6969 );
    wireless_devices device6(26, 600, 21.5098, 20.6969 );
    wireless_devices device7(27, 700, 21.6098, 21.6969 );
    wireless_devices device8(28, 800, 21.7098, 22.6969 );
    wireless_devices device9(29, 900, 21.8098, 23.6969 );
    wireless_devices device10(30, 1000, 21.9098, 24.6969 );

    wireless_devices devices[10]= {device1, device2, device3, device4, device5, device6, device7, device8, device9, device10};

    cout<<"Enter the tansmission range of the current device: ";
    int tram;
    cin>>tram;
    int count =  0;

    for(int i=0; i<10; i++ )
    {
       if (devices[i].getrange() == tram)
       {
          devices[i].print();
          count++;
       }
    }
    
    if (count==0)
    {
        cout<< "No device in the area.";
    }

}