#include<iostream>
using namespace std;

class Intarray{
     
    int *arr;
    int size;
    public:
    Intarray(int s)
    {
        size = s;
        arr = new int[size];
    }
    Intarray(const Intarray& other) {
    size = other.size;
    arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = other.arr[i];
    }
}

    ~Intarray()
    {
        delete[] arr;
    }
    void getvalue(int values[]) {
        for (int i = 0; i < size; i++) {
            arr[i] = values[i];
        }
    }
    Intarray addarr(const Intarray& other) {
    Intarray result(size);
    for (int i = 0; i < size; i++) {
        result.arr[i] = arr[i] + other.arr[i];
    }
    return result;
}

    void reverse() {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

    void sort()
    {
        for(int i =0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                if (arr[i]>arr[j])
                {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]= temp;
                }
            }
        }
        cout<<"Array after sorting: ";
        for(int i =0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void print() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


};
int main() {
    int values[] = {1, 2, 3};
    Intarray array1(3);
    array1.getvalue(values); 

    Intarray array2(array1); 
      
    cout<<"Elenents of array1: ";array1.print();
      
    cout<<"Elenents of array2 (copy of array1): ";array2.print();  

    array2.reverse();  
    
     cout << "Array 1 elements after reversing Array 2: ";
    array1.print();  

    cout << "Array 2 elements after reversing: ";
    array2.print(); 

    return 0;
}
