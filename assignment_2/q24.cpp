#include <iostream>
#include <string>
using namespace std;

class Stack{
    int *buffer,top, size;
    public:
    Stack(int s){
        size = s;
        buffer = new int[size];
        top = -1;
    }
    ~Stack() {
        delete[] buffer;
    }
    void push(int value){
        if (top == size - 1)
        {
            cout<<"Stack overflow!!"<<endl;
        }
        else{
            buffer[++top]= value;
        }
    }
    int pop(){
        if (top== -1){
            cout<<"Stack overflow!!."<<endl;
        }
        else{
            int temp = buffer[top--];
            return temp;
        }
        
    }
    void disp(){
        if (top == -1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Stack contents: ";
            for(int i=0; i<=top; i++)
            {
                cout<<buffer[i]<<" ";
            }
            cout<<endl;
        }
    }
    
};
int main()
{
    Stack s1(10);

    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    
    s1.disp();
    
    cout<<"Popped element: "<<s1.pop()<<endl;

    s1.disp();

}