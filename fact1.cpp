#include<iostream>
using namespace std;

int f(int n){

    if(n==1){
        return 1;
    }

    return n*f(n-1);
}
int main(){

    int result;
    result = f(5);
    cout<<result<<endl;

    return 0;
}