#include<iostream>
using namespace std;

int main(){

    // char vowels[5];

    // for(char &element:vowels){
    //     cin>>element;
    // }
    // for(int idx=0;idx<5;idx++){
    //     cout<<vowels[idx]<<endl;
    // }

    int max,arr[]={1,100,-1,-9,2,101};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    max=arr[0];
    for(int i=1;i<size;i++){

        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<"MAX "<<max<<endl;

    return 0;
}