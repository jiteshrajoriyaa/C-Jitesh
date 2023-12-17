#include<iostream>
#include<vector>
using namespace std;

void countzeros(vector<int> &v){

    int left_pointer=0;
    int right_pointer=v.size()-1;

    while(left_pointer<right_pointer){

        if((v[left_pointer]==1)&&(v[right_pointer]==0)){

            v[left_pointer++]=0;
            v[right_pointer--]=1;
        }

        if(v[left_pointer]==0){

            left_pointer++;
        }

        if(right_pointer==1){

            right_pointer--;
        }
    }
}
int main(){

    vector<int> v;
    int n;  cin>>n;

    for(int i=0;i<n;i++){

        int element;
        cin>>element;

        v.push_back(element);
    }

    countzeros(v);

    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" ";
    }

    cout<<endl;
    return 0;
}