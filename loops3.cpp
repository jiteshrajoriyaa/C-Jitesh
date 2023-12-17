#include<iostream>
using namespace std;

int main(){

    int i,j,row_no;

    cin>>row_no;
    cout<<endl;

    for(i=1;i<=row_no;i++){
        for(j=1;j<=(row_no-i);j++){

            cout<<" ";
        }
            for(j=1;j<=i;j++){
                cout<<j;
            }
            for(j=i-1;j>=1;j--){
                cout<<j;
            }
        cout<<endl;
        
    }
    cout<<endl;
}