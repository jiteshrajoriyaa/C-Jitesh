#include<iostream>
#include<vector>
using namespace std;

int MaximumOnes(vector<vector<int > >&V){

    int maxOnes=INT8_MIN;//cout<<maxOnes<<endl;
    int maxOnesRow=-1;
    int coulmns=V[0].size();

    for(int i=0;i<V.size();i++){
        
        for(int j=0;j<V[i].size();j++){
            if(V[i][j]==1){
                int numberOfOnes=coulmns-j;
                if(numberOfOnes>maxOnes){
                    maxOnes=numberOfOnes;
                    maxOnesRow=i;
                }
                break;
            }
        }
    }

    return maxOnesRow;
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