#include<iostream>
#include<vector>
using namespace std;

int ans1(vector<int> &v){
    int ans1 = -1;
    int lo = 0;
    int hi = v.size();

    if(v[lo]>v[hi]){
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(v[mid]>v[mid+1]){
                ans1 = mid+1;
                break;
            }
            else if(v[mid]>v[mid-1]){
                ans1 = mid - 1;
                break;
            }
            else if(v[mid]>v[lo]){
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
    }
    return ans1;
}

int main(){

    vector<int> v = {7,2,3,4,5,6};
    cout<<ans1(v)<<endl;
    return 0;
}