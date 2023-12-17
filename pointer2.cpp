#include<iostream>
using namespace std;

void check(int *arr,int n){

    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<endl;
    }

    *(arr+2)=98;
}
int main(){

    int arr[]={7,5,9};
    
    check(arr,3);
    cout<<*(arr+2)<<arr[2]<<endl;
    
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<arr[i]<<endl;
    }
    return 0;
}