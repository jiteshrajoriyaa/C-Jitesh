#include<iostream>
using namespace std;

int main(){

    string s1="abcax";
    string result="";

    for(int i=0;i<=s1.length();i++){

        if(s1[i]!='a'){
            result+=s1[i];
        }
    }

    cout<<result<<endl;
    // for(int i=0;i<result.length();i++){
    //     cout<<result[i];
    // }cout<<endl;
    return 0;
}