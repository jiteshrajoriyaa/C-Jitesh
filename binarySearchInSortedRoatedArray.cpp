#include<iostream>
#include<vector>
using namespace std;

int f(vector<int> &v,int target){
    // Time O(logn)
    // Space O(1)
    int lo = 0;
    int hi = v.size() - 1;
    if(v.size() == 1) return 0;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid] == target) return mid;
        if(v[mid] > v[lo]){
            if(target >= v[lo] && target <= v[mid]){
                hi = mid - 1;
            }
            else lo = mid + 1;
        }
        else{
            if(target >= v[mid] && target <= v[hi]){
                lo = mid + 1;
            }
            else hi = mid - 1;
        }
    }

    return -1;
}

int main(){
int n;cin>>n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    int target;cin>>target;
    cout<<f(v,target)<<endl;

    return 0;
}