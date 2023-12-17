#include<iostream>
using namespace std;

/*int  off*/ void/* on */ multiple(int num,int k){

    if(k==0) return;
    // cout<<num<<" ";                  // off
    // return multiple(num+12 ,k-1) ;   // off
    multiple(num,k-1);                  // on
    cout<<num*k<<" ";                   // on
}
int main(){

    multiple(12,10);
    cout<<endl;
    return 0;
}