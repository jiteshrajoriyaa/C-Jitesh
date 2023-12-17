#include<iostream>
#include<vector>
using namespace std;

int f(vector<int> &v,int target){
    // Time O(n)
    // Space O(1)
    int lo = 0;
    int hi = v.size() - 1;
    if(v[lo] == target || v[hi] == target) return 1;
    else
    {    
    while(v[lo] == v[hi]){
        lo++;
        hi--;
    }
    if(v[lo] > v[hi]){
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(v[mid] == target) return 1;
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
    }
    else{
        while(lo <= hi){
        int mid = (lo+hi)/2;
        if(v[mid] == target) return 1;
        else if(v[mid] < target){
            lo = mid + 1;
        }
        else hi = mid - 1;
        }
    }
    }
    return 0;
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