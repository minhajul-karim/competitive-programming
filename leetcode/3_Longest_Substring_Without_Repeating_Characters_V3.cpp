#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

// Define a type for unordered set
typedef map<char,int> mymap;

// Prototype
int lengthOfLongestSubstring(string s);

int main()
{

    string str = "bBB";
    cout << lengthOfLongestSubstring(str) << endl;

    return 0;
}

int lengthOfLongestSubstring(string s)
{
    int i = 0, len = s.length(), max_length = 0;

    // Declare a map
    mymap charMap;

    for (int j = 0; j < len; j++)
    {
        // Find s[j] in the map
        mymap::const_iterator result = charMap.find(s[j]);

        // If s[j] exists in charMap
        if (result != charMap.end())
        {
            i = max(i, charMap[s[j]]);
        }

        // Update the max length
        max_length = max(max_length, j-i+1);
        
        // Insert or update the value of char in charMap
        charMap[s[j]] = j + 1;
    }

    return max_length;
}