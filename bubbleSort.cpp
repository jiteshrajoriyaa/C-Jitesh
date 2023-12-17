#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &v){

    for(int i=0; i<v.size()-1; i++){
        
        bool flag = false;
        for(int j=0; j<v.size()-1-i; j++){

            if(v[j]>v[j+1]){
                flag = true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag) break; // flag == false;
    }
}
int main(){

    int n;cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++){

        cin>>v[i];
    }

    bubbleSort(v);

    for(int i=0; i<n; i++){

        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}