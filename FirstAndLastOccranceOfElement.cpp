#include<iostream>
#include<vector>
using namespace std;

int ans1(vector<int> &v,int target,int hi,int lo){
    int ans1 = -1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(v[mid] == target){
            ans1 = mid;
            hi = mid - 1;
        }
        else if(v[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return ans1;
}
int ans2(vector<int> &v,int target,int hi,int lo){
    int ans2 = -1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(v[mid] == target){
            ans2 = mid;
            lo = mid + 1;
        }
        else if(v[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return ans2;
}
int main(){

    vector<int> v;
    int n;cin>>n;

    for(int i = 0;i < n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;cin>>target;
    cout<<"["<<ans1(v,target,n-1,0)<<","<<ans2(v,target,n-1,0)<<"]"<<endl;
    return 0;
}