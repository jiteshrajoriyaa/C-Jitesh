#include<iostream>
#include<vector>
using namespace std;

void countSort(vector<int> &v,int pos){
    int n = v.size();

    vector<int> freq(10,0);// (9+1 , 0)

    //freq array
    for(int i = 0;i < n;i++){
        freq[((v[i]/pos)%10)]++;
    }

    //commulative array
    for(int i = 1;i < 10;i++){
        freq[i]+=freq[i-1];
    }

    //ans array
    vector<int> ans(n);
    for(int i = n-1;i >= 0;i--){
        
        ans[--freq[((v[i]/pos)%10)]] = v[i];
    }

    //copy ans array to v
    for(int i = 0;i<n;i++){
        v[i] = ans[i];
    }
    return;
}
void redixSort(vector<int> &v){
    int n = v.size();
    int max = INT16_MIN;
    for(int i = 0;i < n;i++){
        if(v[i] > max){
            max = v[i];
        }
    }

    for(int pos = 1;(max/pos)>0;pos*=10){
        countSort(v,pos);
    }
}
int main(){

    int n;cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++){

        cin>>v[i];
    }

    redixSort(v);

    for(int i=0; i<n; i++){

        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}