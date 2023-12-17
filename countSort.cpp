#include<iostream>
#include<vector>
using namespace std;

void countSort(vector<int> &v){

    int n = v.size();
    int max = INT16_MIN;
    for(int i = 0;i < n;i++){
        if(v[i] > max){
            max = v[i];
        }
    }

    //calculating fequency array
    vector<int> freq(max+1,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    //calculating commulative fequency
    for(int i = 1;i<=max;i++){
        freq[i]+=freq[i-1];
    }

    //ans array
    vector<int> ans(n);
    for(int i = n-1;i>=0 ; i--){

        ans[--freq[v[i]]] = v[i];
    }

    //copy ans array to v
    for(int i = 0;i<n;i++){
        v[i] = ans[i];
    }
    return;
}
int main(){

    int n;cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++){

        cin>>v[i];
    }

    countSort(v);

    for(int i=0; i<n; i++){

        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}