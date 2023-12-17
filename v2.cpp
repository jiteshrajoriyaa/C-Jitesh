#include<iostream>
using namespace std;

int main(){

    int  v[]={1,2,3,4,5,6};

    bool occurance=true;
    for(int i=1;i<=6;i++){

        
            if(v[i]<=v[i-1]){
                occurance=false;
                
            }
        
    }

    cout<<occurance<<endl;

    return 0;
}