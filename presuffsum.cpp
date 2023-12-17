#include<iostream>
#include<vector>
using namespace std;

bool PreSuffSum(vector<int> &v){

        int total_sum=0;
        for(int i=0;i<v.size();i++){

            total_sum+= v[i];
        }

        int pre_sum=0;
        for(int i=0;i<v.size();i++){

            pre_sum+=v[i];
            int suff_sum=total_sum-pre_sum;
            
            if(suff_sum==pre_sum){

                return true;
            }
        } 

        return false;
}
int main(){

    vector<int> v;
    int n;cin>>n;

    for(int i=0;i<n;i++){

        int ele;cin>>ele;
        v.push_back(ele);
    }

    cout<<PreSuffSum(v)<<endl;   

    return 0;
}