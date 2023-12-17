#include<iostream>
using namespace std;

int main(){

    int x=10;
    float f=4.5;

    void *ptr;
    ptr=&f;

    float *ff = (float *)ptr;
    cout<<*ff<<endl;

    return 0;
}