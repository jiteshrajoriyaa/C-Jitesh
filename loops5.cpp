//Desimal to Binary
#include<iostream>
using namespace std;

int main(){

    int n;
    int result=0,power=1;

    cin>>n;

    while(n>0){

        int parity=n%2;
        result+=parity*power;
        power*=10;
        n/=2;
    }

    cout<<result<<endl<<endl;
}