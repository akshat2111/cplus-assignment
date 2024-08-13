#include <iostream>
#include <cstring>
using namespace std;

void swap(char str1[], char str2[]) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";

    cout << "Before swap: str1 = " << str1 << ", str2 = " << str2 << endl;
    swap(str1, str2);
    cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << endl;

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

void swap(string &str1, string &str2) {
    string temp = str1;
    str1 = str2;
    str2 = temp;
}

int main() {
    string str1 = "Hello";
    string str2 = "World";

    cout << "Before swap: str1 = " << str1 << ", str2 = " << str2 << endl;
    swap(str1, str2);
    cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << endl;

    return 0;
}

