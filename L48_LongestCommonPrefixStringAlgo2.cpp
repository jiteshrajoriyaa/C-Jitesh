#include<iostream>
#include<string>
#include<vector>
using namespace std;

string LongestCommonPrefixString(vector<string> &str)
{
    string s1 = str[0];
    int ans_len = s1.size();

    for(int i = 1; i < str.size(); i++){
        int j=0;
        while(j < s1.size() && j < str[i].size() && s1[j] == str[i][j]){
            j++;
        }
            ans_len = min(ans_len,j);
    }

    string ans = s1.substr(0,ans_len);
    return ans;
}
int main(){

    cout<<"Enter the number of strings"<<endl;
    int n;cin>>n;
    vector<string> str(n);
    for(int i = 0;i < n;i++){
        cin>>str[i];
    }

    cout<<LongestCommonPrefixString(str);
    return 0;
}