#include<iostream>
using namespace std;

int main(){

    int i,j,row_no,col_no;

    cin>>row_no>>col_no;

    cout<<endl;
    for(i=1;i<=row_no;i++){
        for(j=1;j<=col_no;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}