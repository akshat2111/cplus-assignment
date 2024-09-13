#include <iostream>
using namespace std;

class person {
    string name;
    int age;
    float height;
    public:
    // person(){}

    person (string n, int a, float h):name(n), age(a), height(h){}

    void setname(string n){
        name = n;
    }
    void setage(int a)
    {
        age =a;
    }
    void setheight (float h)
    {
        height = h;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    int getheight()
    {
        return height;
    }
    virtual void printdetails()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Height: "<<height<<endl;
    }
};
class student:public person {
    int roll; 
    int year;
    public:
    student(string n,int a, float h, int r, int y):person(n,a,h),roll(r), year(y){}

    void setroll(int r)
    {
        roll = r;
    }
    void setyear(int y)
    {
        year = y;
    }
    int getroll(){return roll;}
    int getyear(){return year;}

    void printdetails()
    {
        person::printdetails();
        cout<<"Roll no: "<<roll<<endl;
        cout<<"Year of admission: "<<year<<endl;
    }
};

int main ()
{
    person p1("akshat",18,5.9);
    p1.printdetails();
    cout<<endl;

    student s1("akshat",19,5.9,01,2024);
    s1.printdetails();
    cout<<endl;

    person *ptr[4];
    ptr[0]= new person("ak",12,6.7);
    ptr[1] = new person ("aka",13,5.5);
    ptr[2]= new student("akash", 12, 23, 34, 2022);
    ptr[3]= new student("aksha", 33, 44, 55, 2202);


    for (int i=0; i<4; i++)
    {
        ptr[i]->printdetails();
        cout<<endl;
    }
    for (int i=0; i<4; i++)
    {
        delete ptr[i];  
    }

}