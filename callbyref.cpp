#include<iostream>
using namespace std;

void occurance(string s,char ch,int &pf,int &pl){

    for(int i=0;i<s.size();i++){

        if(s[i]==ch){

            pf=i;
            break;
        }
    }
    for(int i=s.size();i>=0;i--){

        if(s[i]==ch){

            pl=i;
            break;
        }
    }
    
}
int main(){

    string name="mabcham";
    
    char ch='a';
    int first=-1;
    int last=-1;

    occurance(name,ch,first,last);

    cout<<first<<" "<<last<<endl;

    return 0;
}