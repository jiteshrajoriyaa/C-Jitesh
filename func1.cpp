#include<iostream>
using namespace std;

int sum(int &x,int y=9){

    return x+y; 
}
int main(){
    int a=5,b=6;
    sum(a);
    cout<<sum(a)<<endl;
    cout<<sum(a,b)<<endl;
    return 0;
}