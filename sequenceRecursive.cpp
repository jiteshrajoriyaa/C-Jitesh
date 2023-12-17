#include<iostream>
using namespace std;

int sequence(int n,int sq = 1){

    cout<<sq<<" ";
    if(sq==n){cout<<endl; return 0;}

    return sequence(n,sq+1); 
}
int main(){

    sequence(410);
    return 0;
}