#include<iostream>
using namespace std;

class Grandparent{

    protected:
    Grandparent(){
        cout<<"I am Rudmal Rajoriya"<<endl;
    }
};

class Child1: virtual public Grandparent{
    public:
    Child1(){
        cout<<"I am Chothmal Rajoriya"<<endl;
    }
};
class Child2:virtual public Grandparent{
    public:
    Child2(){
        cout<<"I am Rajesh Rajoriya"<<endl;
    }
};

class Grandchild: private Child1, private Child2{
    public:
    Grandchild(){
        cout<<"I am Jitesh Rajoriya"<<endl;
    }
};

int main(){

    Grandchild c;

}