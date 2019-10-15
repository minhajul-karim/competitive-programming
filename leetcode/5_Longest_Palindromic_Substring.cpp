#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

// Prototype
string longestPalindrome(string s);
void palindromeFinder(string str, int left, int right, int* maxLength, int* start);


int main()
{
    string str = "xabaxpq";
    cout << longestPalindrome(str) << endl;

    return 0;
}

string longestPalindrome(string s)
{
    int stringLength = s.length();
    int start = 0, maxLength = INT32_MIN;

    for (int i = 0; i < stringLength; i++)
    {
        // Find palindromes with odd number of characters
        palindromeFinder(s, i, i, &maxLength, &start);

        // Find palindromes with even number of characters
        palindromeFinder(s, i, i + 1, &maxLength, &start);
    }

    return s.substr(start, maxLength);
}

void palindromeFinder(string str, int left, int right, int* maxLength, int* start)
{
    int strLength = str.length();
    while (left >= 0 && right < strLength && str[left] == str[right])
    {
        left--;
        right++;
    }

    int currentLength = right - left - 1;
    if (currentLength > *maxLength)
    {
        // Edit maxLength
        *maxLength = currentLength;
        
        // Edit the starting point of the palindrome
        *start = left + 1;
    }
    
}
