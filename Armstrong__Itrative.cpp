#include<iostream>
using namespace std;

int main(){

    int n;cin>>n;
    int save = n;

    int number=0;
    while(n>0){
        int remender = n%10;
        number+=remender*remender*remender;
        n/=10;
    }


    if(number == save) cout<<"True";
    else cout<<"False";

    return 0;
}