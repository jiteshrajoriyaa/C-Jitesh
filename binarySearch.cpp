#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &input,int target){
    //Time : O(logn)
    //Space : O(1)
    int lo = 0;
    int hi = input.size() - 1;
    
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(input[mid] == target) return mid;
        else if(input[mid] < target){
            lo = mid + 1;
        }
        else hi = mid - 1;
        }
    return -1;
}

int binarySearchRecursive(vector<int> &input,int target,int lo,int hi){
    //Time : O(logn)
    //Space : O(logn)
    if(lo>hi) return -1;
    
    int mid = lo + (hi-lo)/2;
    if(input[mid] == target) return mid;
    else if(input[mid] < target){
        return binarySearchRecursive(input,target,mid+1,hi);
    }
    else{
        return binarySearchRecursive(input,target,lo,mid-1);
    }

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
    cout<<binarySearchRecursive(input,target,0,n-1)<<endl;

    return 0;
}