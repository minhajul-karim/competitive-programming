#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

// Define a type for unordered set
typedef unordered_set<char> set;

// Prototype
int lengthOfLongestSubstring(string s);

int main()
{

    string str = "bbxyz";
    cout << lengthOfLongestSubstring(str) << endl;

    return 0;
}

int lengthOfLongestSubstring(string s)
{
    // Declare an unordered set
    set myset;

    // Length of s
    int len = s.length();
    int i = 0, j = 0, max_length = 0;

    while (i < len && j < len)
    {
        // Get the find result
        set::const_iterator result = myset.find(s[j]);

        // If s[j] doesn't present in myset
        if (result == myset.end())
        {
            myset.insert(s[j++]);
            max_length = max(max_length, j-i);
        }

        // If s[j] doesn't exist in myset
        else myset.erase(s[i++]);
    }
    
    return max_length;
}