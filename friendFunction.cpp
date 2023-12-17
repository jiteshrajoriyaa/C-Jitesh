#include<iostream>
using namespace std;

class Friend{
    int x;

    public:
    Friend(int i){ x = i;}

    friend void print(Friend &obj);
};

void print(Friend &obj){
    cout<<obj.x;
}
int main(){

    Friend obj(5);
    print(obj);
    
}