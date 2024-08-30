#include <iostream>
using namespace std;

class Queue{
    int *data, front, rear, size;
    public:
    Queue(int s)
    {
        size = s+1;
        data = new int[size];
        front = rear = 0;
    }
    ~Queue ()
    {
        delete[] data;
    }
    void add(int value)
    {
        if ((rear +1 )% size == front){
            cout<<"Queue overflow!!"<<endl;
        }
        else{
            data[rear] = value;
            rear = (rear+1)%size;
        }
    }
    int remove(){
        if (front == rear){
            cout<<"The queue is empty."<<endl;
        }
        else{
            int temp = data[front];
            front = (front+1)%size;
            return temp;
        }
    }
     void disp() {
        if (rear == front) {
            cout << "The queue is empty" << endl;
        } else {
            cout << "Queue elements: ";
            int i = front;
            while (i != rear) {
                cout << data[i] << " ";
                i = (i + 1) % size;
            }
            cout << endl;
        }
    }

};
int main()
{
    Queue q1(10);
    q1.add(2);
    q1.add(3);
    q1.add(4);
    q1.add(5);

    q1.disp();

    q1.remove();

    q1.disp();
}