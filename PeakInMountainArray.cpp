#include<iostream>
#include<vector>
using namespace std;

int f(vector<int> &v){
    int lo = 0;
    int hi = v.size()-1;

    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(mid == 0){
            if(v[mid] > v[mid+1]) return 0;
            else return 1;
        }
        else if(mid == v.size()-1){
            if(v[v.size()-1] > v[v.size()-2]) return v.size()-1;
            else v.size() - 2;
        }
        else{
            if(v[mid] > v[mid-1] && v[mid] > v[mid+1]){
                return mid;
            }
            else if(v[mid] > v[mid - 1]) lo = mid + 1;
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
    cout<<f(v)<<endl;

    return 0;
}