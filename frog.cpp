#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {10,30,40,30};
    int frog;
    int cost = 0;
    for(frog=0;frog < 4;){

        if(abs(v[frog]-v[frog+1])>abs(v[frog]-v[frog+2])){
            cost+=abs(v[frog]-v[frog+1]);cout<<"cost = "<<cost<<endl;
            frog+=1;cout<<frog<<" "<<v[frog];
        }
        else{
            cost+=abs(v[frog]-v[frog+2]);
            frog+=2;
        }
    }cout<<cost<<endl;
    return 0;
}