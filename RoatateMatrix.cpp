#include<iostream>
#include<vector>
using namespace std;

void roatateMatrix(vector<vector<int> > &vec){

    int n=vec.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){

            swap(vec[i][j],vec[j][i]);
        }
    }

    for(int i=0;i<n;i++){
         reverse(vec[i].begin(),vec[i].end());
        // for(int j=0;j<n;j++){
        //     vec[i][j]=vec[i][n-j+1];
        // }
    }

}
int main(){

    int n;cin>>n;
    vector<vector<int> > vec(n,vector<int> (n));

    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();i++){

            cin>>vec[i][j];
        }
    }

    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){

            cout<<vec[i][j]<<" ";
        }cout<<endl;
    }
    roatateMatrix(vec);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            cout<<vec[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}