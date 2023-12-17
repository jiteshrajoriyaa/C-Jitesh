#include<iostream>
#include<string>
using namespace std;

//time complexity = O(n) n is the length of string
//space complexity = O(1)

int LongestOnes(string str,int k){

    int zeroCount = 0;
    int start = 0;
    int end = 0;
    int maxLength = 0;

    for(;end < str.length();end++){

        if(str[end] == '0'){
            zeroCount++;
        }

        while(zeroCount>k){
            /* if(str[start] == '0')*/ zeroCount--;
            
            start++;
        }

        maxLength = max(maxLength,end-start+1);
    }

    return maxLength;
}
int main(){

    string str;
    cin>> str;

    int k;
    cin>>k;


    cout<< LongestOnes(str,k)<<endl;
    return 0;
}