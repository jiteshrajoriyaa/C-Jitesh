#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// time complexity = O(n) : n is length of decoded string
// space complexity = O(n) : n is length of decoded string

string decoder(string s)
{

    string result = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ']')
        {
            result.push_back(s[i]);
        }
        else
        {
            string str = "";

            while (!result.empty() && result.back() != '[')
            {
                str.push_back(result.back());
                result.pop_back();
            }

            result.pop_back();

            reverse(str.begin(),str.end());

            string num = "";
            while(!result.empty() && (result.back() >= '0' && result.back() <= '9')){
                num.push_back(result.back());
                result.pop_back();
            }

            reverse(num.begin(),num.end());

            int int_num = stoi(num);

            while(int_num){
                result+=str;
                int_num--;
            }
        }
    }

    return result;
}
int main()
{

    string str = "3[b1[ca]]";
    cout << decoder(str) << endl;

    // return 0;
}