#include<iostream>
using namespace std;

int main(){

    int r1,c1;
    cout<<"Order of A"<<endl;
    cin>>r1>>c1;

    cout<<"Element of A"<<endl;
    int A[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<A[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;


    int B[c1][r1];
    cout<<"Transpose of A"<<endl;
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            B[i][j]=A[j][i];
        }
    }

    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            cout<<B[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;

    return 0;
}