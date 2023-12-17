#include<iostream>
using namespace std;
int main(){

    int arr[]={1,-29,0,45,45,9,1001};

    int value,flag=-1;
    int size=sizeof(arr)/sizeof(arr[0]);
    scanf("%d",&value);
    for(int idx=0;idx<size;idx++){

        if(arr[idx]==value){
         flag=idx;
         break;
        }
        
    }

    
          cout<<flag<<endl;
        

    return 0;
}