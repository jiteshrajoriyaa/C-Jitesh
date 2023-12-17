#include<iostream>
using namespace std;

class Parent{
    public:
    virtual void show(){
        cout<<"Hello motherfucker";
    }
};
class Child: public Parent{
    public:
    void show(){
        cout<<"Hello motherfucker child";
    }
};

int main()
{

    Parent *p;
    Child c;
    p = &c;

    p->show();
}