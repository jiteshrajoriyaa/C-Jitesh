#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string LongestCommonPrefixString(vector<string> &str){
    
    sort(str.begin(),str.end());
    string s1 = str[0];
    string s2 = str[str.size()-1];
    string ans = "";

    int j = 0, i = 0;
    
        while(i < s1.size() && j < s2.size()){
            if(s1[i] == s2[j]){
                ans+=s1[i];
                i++;j++;
            }
            else break;
        }

        return ans;
    
}
int main(){

    cout<<"Enter number of strings"<<endl;
    int n;cin>>n;

    vector<string> str(n);
    for(int i = 0; i < n; i++){
        cin>>str[i];
    }

    cout<<LongestCommonPrefixString(str)<<endl;

    return 0;
}