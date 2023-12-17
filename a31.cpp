#include<iostream>
using namespace std;


int largestelementidx(int arr[],int size){

    int max=-10;
    int maxidx=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            maxidx=i;
        }
    }

    return maxidx;
}
int main(){

    int arr[]={2,3,7,5,7,6,1};
    int n=7;
    int idxoflargest=largestelementidx(arr,n);

   // arr[idxoflargest]=-1;
   int largestelement=arr[idxoflargest];

   for(int i=0;i<n;i++){

    if(arr[i]==largestelement){

        arr[i]=-1;
    }
   }
    int idxsecondlargest=largestelementidx(arr,n);

    cout<<arr[idxsecondlargest]<<endl;

    return 0;
}