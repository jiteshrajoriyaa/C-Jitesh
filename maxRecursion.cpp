#include<iostream>
using namespace std;

int maxArray(int *arr,int idx,int size){

    if(idx==size-1){

        return arr[idx];
    }

    return max(arr[idx],maxArray(arr,idx+1,size));
}
int main(){

    int arr[]={3,6,10,4,7,78};

    cout<<maxArray(arr,0,6)<<endl;
    return 0;
}