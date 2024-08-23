#include <iostream>
using namespace std;

class vector{

    int *arr;
    int size;
    public:
    vector( int s)
    {
        size = s;
        arr = new int[size];
        for (int i=0; i<size; i++)
        {
            arr[i]=0;
        }
    }
    void setvalues()
    {
       cout<<"Enter "<<size<<" elements for vector:";
       for(int i=0; i<size; i++)
       {
        cin>>arr[i];
       }
    }

    void addition(vector other )
    {
        if(size != other.size)
        {
            cout<<"cannot add two different vectors."<<endl;
        }
        else
        {
            cout<<"Result of addition: ";
            for (int i=0; i<size; i++)
            {
                cout<<arr[i]+other.arr[i]<<" ";
            }
            cout<<endl;
        }

    }
    void subtraction(vector other)
    {
        if(size != other.size)
        {
            cout<<"cannot subtract two different vectors."<<endl;
        }
        else
        {
            cout<<"Result of the subtraction: ";
            for (int i=0; i<size; i++)
            {
                cout<<arr[i]-other.arr[i]<<" ";
            }
            cout<<endl;
        }

    }
    void lessthan(vector other)
    {
        if (size!= other.size)
        {
            cout<<"cannot compare vector of two different sizes."<<endl;
        }
        else{
            bool isless = false;
           for(int i =0; i<size;i++)
           {
            if(arr[i] <= other.arr[i])
            {
                isless =true;
            }
           }
           if (!isless)
           {
            cout<<"vector 1 is less than vector 2."<<endl;
           }
           else
           cout<<"vector 1 is not less than vector 2"<<endl;
        }

    }
    void greaterthan(vector other)
    {
        if (size!= other.size)
        {
            cout<<"cannot compare vector of two different sizes."<<endl;
        }
        else{
            bool isless = false;
           for(int i =0; i<size;i++)
           {
            if(arr[i] >= other.arr[i])
            {
                isless =true;
            }
           }
           if (!isless)
           {
            cout<<"vector 1 is greater than vector 2."<<endl;
           }
           else
           cout<<"vector 1 is not greater than vector 2"<<endl;
        }

    }
    void equalornot(vector other)
    {
        if (size!= other.size)
        {
            cout<<"cannot compare two diffenent vectors."<<endl;
        }
        else{
            bool isequal = false;
            for(int i= 0; i<size; i++)
            {
                if(arr[i]==other.arr[i])
                {
                    isequal = true;
                }
            }
            if (!isequal)
            {
                cout<<"Two vectors are not same."<<endl;
            }
            else cout<<"Two vectors are same."<<endl;
        }

    }
    
};

int main()
{
    vector v1(3);
    vector v2(3);

    cout<<"Vector 1:"<<endl;
    v1.setvalues();
    cout<<"Vector 2:"<<endl;
    v2.setvalues();

    v1.addition(v2);
    v1.subtraction(v2);
    v1.lessthan(v2);
    v1.greaterthan(v2);
    v1.equalornot(v2);

}

