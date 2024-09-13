#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


class shape{
    public:
    virtual string get_name() const =0;
    virtual ~shape(){};

};
class two_d_shape:public shape{
   public:
   virtual void get_area()=0;
};
class three_d_shape:public shape{
    public:
    virtual void get_area()=0;
    virtual void get_volume()=0;
};
class circle:public two_d_shape {

    int r;
    public:
    circle (int radius){
        r = radius;
    }
    string get_name() const override{
        return "circle";
    }
    void get_area(){

        cout<<"The area of the circle of radius "<<r<<" is"<<M_PI*r*r<<endl;
    }
};
class rectangle:public two_d_shape{
    int x,y;
    public:
    rectangle(int l, int b)
    {
        x= l;
        y = b;
    }
    string get_name() const override{
        return "rectangle";
    }
    void get_area()
    {
        cout<<"The area of the rectangle is: "<<x*y<<endl;
    }
};

class ellipse: public two_d_shape{

    int a, b;
    public:
    ellipse(int semi_major, int semi_minor):a(semi_major), b(semi_minor){}
    
    string get_name() const override{
        return "ellipse";
    }
    void get_area(){
        cout<<"The area of the semi_major axis "<<a<<" and semi_minor axis "<<b<<" is "<<M_PI*a*b<<endl;
    }
};

class sphere:public three_d_shape{
    int r;
    public:
    sphere(int radius):r(radius){}
    
    string get_name() const override{
        return "sphere";
    }
    void get_area(){
        cout<<"The area of the sphere of radius "<<r<<" is "<<4*M_PI*r*r<<endl;
    }
    void get_volume(){
        cout<<"The volume of the sphere of radius "<<r<<" is "<<(4/3)*M_PI*r*r*r<<endl;
    }
};
class cube : public three_d_shape{
    int a;
    public:
    cube(int side_length):a(side_length){}
    
    string get_name() const override{
        return "cube";
    }
    void get_area(){
        cout<<"The area of the cube of side "<<a<<" is "<<6*a*a<<endl;
    }
    void get_volume(){
        cout<<"The volume of the cube of side "<<a<<" is "<<a*a*a<<endl;
    }
};

int main ()
{
   vector<shape*> shapes;

   shapes.push_back(new circle(3));
   shapes.push_back(new rectangle(3,4));
   shapes.push_back(new ellipse(5,8));
   shapes.push_back(new sphere(9));
   shapes.push_back(new cube(12));

   for(auto& shape: shapes)
   {
    cout<<shape->get_name()<<": ";

    if (two_d_shape* two_d = dynamic_cast<two_d_shape*>(shape))
    {
        two_d->get_area();
    }
    if(three_d_shape* three_d = dynamic_cast<three_d_shape*>(shape))
    {
        three_d->get_area();
        three_d->get_volume();

    }
    cout<<endl;
   }

   for(auto& shape: shapes)
   {
    delete shape;
   }
  return 0;
}