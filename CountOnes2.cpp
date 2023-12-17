#include<iostream>
#include<vector>
using namespace std;

int MaximumOnes(vector<vector<int> > &V){

    int maxRows=-1;
    for(int i=0;i<V.size();i++){

        int j=V[i].size()-1;
        while(j>=0 && V[i][j]==1){
            j--;
            maxRows=i;
        }
    }

    return maxRows;
}
int main(){

    int n,m;cin>>n>>m;
    vector<vector<int> > vec(n,vector<int> (m));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }

    int res;
    res=MaximumOnes(vec);
    
    cout<<res<<endl;

    return 0;
}
