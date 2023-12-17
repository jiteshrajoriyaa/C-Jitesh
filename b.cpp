//This is a comment made by Git
#include<iostream>
using namespace std;

void bubble(int arr[],int n){

    for(int i=0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-1-i;j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(!flag) break;
    }
}
int main(){ 

    int arr[]={12,43,23,45,34,23};
    int n = sizeof(arr)/sizeof(arr[0]);cout<<n<<endl;

    bubble(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
