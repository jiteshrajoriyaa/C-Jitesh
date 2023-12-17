#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    for(int i=0;i<5;i++){

        int e;
        cin>>e;
        v[i]=e;
    }

    int x;

    cin>>x;

    int occure;

    for(int i =(v.size()-1);i<=0;i--){

        if(v[i]==x){
            occure=i;
            break;
        }
    }

    cout<<occure<<endl;

    return 0;
}