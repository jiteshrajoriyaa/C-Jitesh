//Binary to Desimal
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    cout<<endl;
    
    int sum=0,power=1;
    while(n>0){
        int last_digit=n%10;
        sum=sum+last_digit*power;
        power=power*2;
        n=n/10;
    }
    cout<<sum<<endl;

    return 0;
}