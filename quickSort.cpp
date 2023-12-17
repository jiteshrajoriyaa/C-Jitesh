#include<iostream>
using namespace std;

int partition(int arr[],int first,int last){

    int i = first - 1;
    int j = first;
    int pivot = arr[last];

    for(;j<last;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[last]);
    
    return i + 1;
}
void quickSort(int arr[],int first,int last){
    
    if(first>=last) return;

    int pivot = partition(arr,first,last);

    quickSort(arr,first,pivot-1);
    quickSort(arr,pivot+1,last);

    }
int main(){
    int n;
    int arr[] = {4,5,3,9,34,-1,2,1};
    n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}