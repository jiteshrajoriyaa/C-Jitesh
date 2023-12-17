#include<iostream>
#include<math.h>
using namespace std;

int f(int n,int d){

    if(n == 0) return 0;
    return pow(n%10,d) + f(n/10 , d);
}
int main(){

    int n=153; //;cin>>n;
    int no_of_digits = 0;
    int temp = n;
    
    while(temp>0){

        temp/=10;
        no_of_digits++;
    }

    int result = f(n,no_of_digits);
    if(result == n) cout<<"True";
    else cout<<"False";

    cout<<endl;

    return 0;
}