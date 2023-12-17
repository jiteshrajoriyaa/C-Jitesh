#include<iostream>
#include<vector>
using namespace std;

void SortEvenOdd(vector<int> &v){

    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr<right_ptr){

        if((v[left_ptr]%2==1) && (v[right_ptr]%2==0)){

            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }

        if(v[left_ptr]%2==0){

            left_ptr++;
        }

        if(v[right_ptr]%2==1){

            right_ptr--;
        }
    }

    return;
}
int main(){

    vector<int> v;

    int n; cin>>n;

    for(int i=0;i<n;i++){

        int element; cin>>element;
        v.push_back(element);
    }

    SortEvenOdd(v);

    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" ";
    }

    cout<<endl;

    return 0;
}