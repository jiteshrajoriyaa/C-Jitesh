#include<iostream>
using namespace std;

int sumArray(int *arr,int idx,int size){

    if(idx==size-1){
        return arr[idx];
    }

    return arr[idx]+sumArray(arr,idx+1,size);
}
int main(){

    int arr[]={2,3,6,7,4,2};
    
    cout<<sumArray(arr,0,6)<<endl;
    return 0;
}