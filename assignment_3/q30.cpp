#include<iostream>

class a{};
class b{};
class c{};
class d:public a , public b{};
class e:public b, public c{};
class f: public d, public e{};

int main ()
{}