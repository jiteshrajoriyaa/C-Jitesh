#include<iostream>
using namespace std;

bool f(int *arr,int x,int n,int i){

    if(i == n){
        
        if(arr[i] == x) return 1;

        else return 0;
    }

    return ((arr[i] == x)? true : false) || f(arr , x , n ,i + 1);
} 
int main(){

    int arr[] = {10,34,54,13,56,39,63};

    cout<<f(arr,63,7,0)<<endl;

    return 0;
}