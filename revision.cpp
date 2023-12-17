#include<iostream>
#include<vector>
using namespace std;

void countSort(vector<int> &v,int n){

    int max_ele = INT16_MIN;
    for(int i = 0;i < n;i++){
        if(v[i] > max_ele){
            max_ele = v[i];
        }
    }
    // for(int i = 0; i < n-1; i++)
    // {
    //     max_ele = max(v[i],v[i+1]);
    // }cout<<max_ele<<endl;

    vector<int> freq(max_ele+1,0);
    for(int i = 0; i < n; i++){
        freq[v[i]]++;
    }

    for(int i = 1; i <= max_ele; i++){
        freq[i]+=freq[i-1];
    }

    vector<int> ans(n);
    for(int i = n-1; i >= 0; i--){

        ans[--freq[v[i]]] = v[i];
    }

    for(int i = 0; i < n; i++){

        v[i] = ans[i];
    }
}
int main(){

    int n;cin>>n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    countSort(v,n);

    for(int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}