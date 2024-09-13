#include<iostream>
#include<cmath>
using namespace std;

class complex{
    int real;
    int img;
    public:
    complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void setreal(int r)
    {
        real = r;
    }
    void setimg(int i)
    {
        img = i;
    }
    int getreal()
    {
        return real;
    }
    int getimg()
    {
        return img;
    }
    complex operator+(complex &ob)
    {
        return complex(real+ob.real, img+ob.img);
    }
    complex operator-(complex &ob)
    {
        return complex(real-ob.real, img-ob.img);
    }
    complex operator*(const complex &ob) const {
        return complex(
            real * ob.real - img * ob.img,
            real * ob.img + img * ob.real
        );
    }

    complex operator/(const complex &ob) const {
        int denominator = ob.real * ob.real + ob.img * ob.img;
        if (denominator == 0) {
            throw runtime_error("Division by zero");
        }
        return complex(
            (real * ob.real + img * ob.img) / denominator,
            (img * ob.real - real * ob.img) / denominator
        );
    }


};
int main ()
{
    complex c1(5,3), c2(2,4);
    complex c3 = c1+c2;
    cout<<"The result of sum is: "<<c3.getreal()<<" + i"<<c3.getimg()<<endl;
     c3 = c1-c2;
    cout<<"The result of subtraction is: "<<c3.getreal()<<" + i"<<c3.getimg()<<endl;
    c3 = c1*c2;
    cout<<"The result of multiplication is: "<<c3.getreal()<<" + i"<<c3.getimg()<<endl;
     c3 = c1/c2;
    cout<<"The result of division is: "<<c3.getreal()<<" + i"<<c3.getimg()<<endl;

}