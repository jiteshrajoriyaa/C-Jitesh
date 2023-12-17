#include <iostream>
using namespace std;

string removeA(string &s, int idx,char ch)
{

    if (idx == s.length())
        return "";

    string curr = "";
    curr += s[idx];
    return ((s[idx] == ch) ? "" : curr) + removeA(s, idx + 1,ch);
}
int main()
{

    string s = "abcax";
    int n = 5;
    cout << removeA(s, 0,'a') << endl;
    return 0;
}