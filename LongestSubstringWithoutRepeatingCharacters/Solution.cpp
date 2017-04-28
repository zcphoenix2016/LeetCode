#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int lengthOfLongestSubstring(string s) 
{
    string l_subStr{};
    string::size_type l_found = 0;
    int l_len = 0;
    for(int i = 0; i < s.length(); ++ i)
    {
        l_found = l_subStr.find(s[i]);
        if(l_found != string::npos)
        {
            if(l_len < l_subStr.length())
            {
                l_len = l_subStr.length();
            }
            l_subStr.erase(0, l_found + 1);
        }
        l_subStr += (s[i]);
    }
    
    return max(l_len, static_cast<int>(l_subStr.length()));
}

int main()
{
    string str1 = "dvdf", str2 = "ynyo";

    cout << "str1: " << lengthOfLongestSubstring(str1) << ", str2: " << lengthOfLongestSubstring(str2) << endl;
}