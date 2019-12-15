#include <set>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool buddyStrings(string A, string B);

int main()
{
    string a = "abab";
    string b = "abab";

    buddyStrings(a, b) == 1 ? cout << "True\n" : cout << "False\n";

    return 0;
}

bool buddyStrings(string A, string B)
{
    int lenOfA = A.length(), lenOfB = B.length();

    // When length of both strings differs
    if (lenOfA != lenOfB)
    {
        return false;
    }

    // When both strings are the same
    if (A == B)
    {
        // Insert A into set
        set<char> uniqueCharsOfA;
        uniqueCharsOfA.insert(A.begin(), A.end());

        // When there are unique chars at A
        return (uniqueCharsOfA.size() < lenOfA) ? true : false;
        
    }

    // Find the unmatched indices of A, B
    vector<int> unmatchedIndices;
    for (int i = 0; i < lenOfA; i++)
    {
        if (A[i] != B[i])
        {
            unmatchedIndices.push_back(i);
            if (unmatchedIndices.size() > 2)
            {
                return false;
            }
        }
    }

    // Try swapping
    int firstUnmatchedIndex = unmatchedIndices[0], lastUnmatchedIndex = unmatchedIndices[1];
    return (A[firstUnmatchedIndex] == B[lastUnmatchedIndex] && A[lastUnmatchedIndex] == B[firstUnmatchedIndex]) ? true : false;

}