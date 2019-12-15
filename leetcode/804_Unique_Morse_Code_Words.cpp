#include <set>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int uniqueMorseRepresentations(vector<string> &words);

int main()
{
    vector<string> words{"abc", "def", "gig", "msg"};

    cout << uniqueMorseRepresentations(words) << endl;

    return 0;
}

int uniqueMorseRepresentations(vector<string> &words)
{
    // Alphabets in morse code
    vector<string> morseAlphabet{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.",
    "---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    int numberOfWords = words.size();

    // Declare a Set to store unique morse strings of words
    set<string> morseStrings;

    for (int i = 0; i < numberOfWords; i++)
    {
        int numOfCharsInWord = words[i].length();
        string temp = "";
        
        for (int j = 0; j < numOfCharsInWord; j++)
        {
            temp += morseAlphabet[words[i][j] - 97];
        }

        morseStrings.insert(temp);
    }
    
    return morseStrings.size();
}