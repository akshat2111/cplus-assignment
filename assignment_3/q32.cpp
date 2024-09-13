#include <iostream>
using namespace std;

class employee{

    string name;
    float salary;
    public:
    employee(string n, float s):name(n), salary(s){}
    void setname(string n)
    {
        name = n;
    }
    void setsalary(float s)
    {
        salary = s;
    }
    string getname(){return name;}
    float getsalary(){return salary;}

    virtual void printdetails()
    {
        cout<<"Name: "<<name<<","<<" Salary: "<<salary<<endl;
    }
};
class manager: public employee{

    string type;
    float allowance;
    public:
    manager(string n, float s, string t, float a):employee(n,s),type(t), allowance(a){}

    void settype(string t)
    {
        type= t;
    }
    void setallowance(float a)
    {
        allowance = a;
    }
    string gettype(){return type;}
    float getallowance(){return allowance;}

    void printdetails()
    {
        employee::printdetails();
        cout<<"Type: "<<type<<","<<" Allowance: "<<allowance<<endl;
    }
};

class clerk: public employee{

    string type;
    float allowance;
    public:
    clerk(string n, float s, string t, float a):employee(n,s),type(t), allowance(a){}

    void settype(string t)
    {
        type= t;
    }
    void setallowance(float a)
    {
        allowance = a;
    }
    string gettype(){return type;}
    float getallowance(){return allowance;}

    void printdetails()
    {
        employee::printdetails();
        cout<<"Type: "<<type<<","<<" Allowance: "<<allowance<<endl;
    }
};

int main ()
{
    cout<<"Employee details: "<<endl;
    employee e1("akshat", 87000.197);
    e1.printdetails();
    cout<<endl;
    cout<<"Manager and clerk details: "<<endl;
    manager m1("Akshat",99999.009,"Housing",2000);
    clerk c1("Rjat",50900,"housing",1250);
    m1.printdetails();
    cout<<endl;
    c1.printdetails();
    cout<<endl;

    employee *ptr[6];

    ptr[0]= new employee("manik",5500);
    ptr[1]= new employee("ram",30000);
    ptr[2]= new manager("Ajeet",70000,"Travel expenses",2000);
    ptr[3]= new manager("Ranjeet",68000, "Travel expenses",2000);
    ptr[4]= new clerk("Abhijeet",34000, "Travel expenses",1050);
    ptr[5]= new clerk("Angraj",33500, "Travel expenses", 1020);

    cout<<"Employee,Manager and Clerk details: "<<endl;
    for(int i=0; i<6;i++)
    {
        ptr[i]->printdetails();
        cout<<endl;
    }
    for(int i=0; i<6;i++)
    {
        delete ptr[i];
    }
}