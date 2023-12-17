#include<iostream>
using namespace std;

void sequence(int n){

    if(n<1) return;

    sequence(n-1);
    
    cout<<n<<" ";
    
}   
int main(){

    sequence(10000);
    return 0;
}