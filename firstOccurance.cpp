#include<iostream>
#include<vector>
using namespace std;

int firstOccurance(vector<int> &v,int target){
    //Time : O(logn)
    //Space : O(1)
    int lo = 0;
    int hi = v.size() - 1;
    int ans = -1;
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(v[mid] == target){
            ans = mid;
            hi = mid-1;
        }
        else if(v[mid] < target){
            lo = mid + 1;
        }
        else hi = mid - 1;
        }
    return ans;
}
int main(){
    int n;cin>>n;
    vector<int> input;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        input.push_back(x);
    }

    int target;cin>>target;
    cout<<firstOccurance(input,target)<<endl;

    return 0;
}