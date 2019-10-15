#include <iostream>
#include <cstring>

using namespace std;

int lengthOfLongestSubstring(string s);

int main()
{
    string str = "x";
    cout << lengthOfLongestSubstring(str) << endl;

    return 0;
}

int lengthOfLongestSubstring(string s)
{
    string temp;
    int maxlen = 0, len_of_str = s.length();

    // Start building substring form the i'th index
    for (int i = 0; i < len_of_str; i++)
    {
        // Append the i'th index into temp
        temp.append(1, s[i]);

        // Increment j if it's inside len of str
        int j = (i+1 <= len_of_str-1) ? i+1 : i;

        /* 
            Keep appending indices of str until every chars
            of temp remain unique 
        */
        while (temp.find(s[j]) == string::npos && j < len_of_str && i != j)
        {
            temp.append(1, s[j++]);
        }

        maxlen = (temp.length() > maxlen) ? temp.length() : maxlen;

        // Reset the temp
        temp = "";
        
    }

    return maxlen;
}


