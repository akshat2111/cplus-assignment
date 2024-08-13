#include <iostream>
using namespace std;

void strcpy_(string &str1, const string &str2)
 {
     str1 = str2;
     cout<<"str2 is "<<str2<<endl;
}

int main() {
    string str1;
   string str2;
   cout<<"enter str1 ";
   cin>>str1;
   cout<<"enter str2 ";
   cin>>str2;
   cout<<"str1 is " << str1<<endl;
   strcpy_(str1,str2);
   cout<<"now str1 is: "<<str1<<endl;
   cout<<"and str2 is: "<<str2<<endl;
    return 0;
}
