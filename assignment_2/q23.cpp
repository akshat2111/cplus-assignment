#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
    public:
    Complex(int x, int y):real(x), img(y)
    {}
    void set_real(int r)
    {
        real = r;
    }
    void set_img(int i)
    {
        img = i;
    }
    int get_real() 
    {
        return real;
    }
    int get_img()
    {
        return img;
    }
    void disp() 
    {
       cout<<"Complex no.: "<<real<<" + "<<img<<"i "<<endl;
    }
    Complex sum(Complex& other)
    {
        return Complex(real+other.real, img+other.img);
    }
};
int main()
{
    Complex c1(1,3);
    Complex c2(3,4);

    c1.disp();
    c2.disp();
    Complex c3 = c1.sum(c2);
    c3.disp();

}