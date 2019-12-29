#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int countOfSmallChar(string s);
vector<int> numSmallerByFrequency(vector<string> &queries, vector<string> &words);

int main()
{
    vector<string> queries{"bbb","cc"};
    vector<string> words{"a","aa","aaa","aaaa"};

    vector<int> result = numSmallerByFrequency(queries, words);
    for (int i : result)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}

vector<int> numSmallerByFrequency(vector<string> &queries, vector<string> &words)
{
    // Return an empty vector if any of the parameteres are empty
    if (queries.empty() || words.empty())
    {
        return {};
    }

    // Apply countOfSmallChar() in words
    vector<int> smallCharWordsList;
    for (string word : words)
    {
        smallCharWordsList.push_back(countOfSmallChar(word));
    }

    // Sort smallCharWordsList
    sort(smallCharWordsList.begin(), smallCharWordsList.end());

    int lenOfSmallCharWordsList = smallCharWordsList.size();

    vector<int> answer;

    // For every query calculate the count of small chars and find if there're
    // larger counts in words[]
    for (string query : queries)
    {
        int smallCharsOfQuery = countOfSmallChar(query), left = 0, right = lenOfSmallCharWordsList - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (smallCharWordsList[mid] <= smallCharsOfQuery)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
            
        }
        
        answer.push_back(lenOfSmallCharWordsList - left);
    }

    return answer;
}

// Returns the number of smallest(by ASCII) character of a string
int countOfSmallChar(string s)
{
    int i, count[26] = {0};

    // Calculate the count of chars of s
    for (char ch : s)
    {
        count[ch - 97]++;
    }

    // Find the smallest count
    for (i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            break;
        }
    }

    return count[i];
}

