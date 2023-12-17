#include<iostream>
using namespace std;

int secondlargest(int arr[],int size){

    int max= -1;
    for(int i=0;i<size;i++){

        if(arr[i]>max){

            max=arr[i];
        }
    }
    

    int max2=-1;
    for(int i=0;i<size;i++){

        if(arr[i]>max2&&arr[i]<max){

            max2=arr[i];
        }
    }

    return max2;
}
int main(){

    int arr[]={1,2,2,5,4,4,10,7,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    
    cout<<secondlargest(arr ,size)<<endl;
    return 0;
}