#include<iostream>
using namespace std;

int main(){

    int a[]={1,2,4,6,9,0,10};
    int x;

    cout<<"enter the sum x which is equal to the pair"<<endl;
    cin>>x;

    int pair=0;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                if(x==a[i]+a[j]+a[k]){

                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                     pair++;
                 }
            }
        }
    }

    cout<<pair<<endl;

    return 0;

}