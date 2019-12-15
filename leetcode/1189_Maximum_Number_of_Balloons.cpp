#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int maxNumberOfBalloons(string text);

int main()
{
    string s = "balon";

    cout << maxNumberOfBalloons(s) << endl;

    return 0;
}

int maxNumberOfBalloons(string text)
{
    // Initialize the array letterFrequency to zero
    unsigned int letterFrequency[5] = {0};

    // Count the letter frequency
    for (char ch : text)
    {
        switch (ch)
        {
        case 'b':
            letterFrequency[0]++;
            break;
        
        case 'a':
            letterFrequency[1]++;
            break;
        
        case 'l':
            letterFrequency[2]++;
            break;
        
        case 'o':
            letterFrequency[3]++;
            break;
        
        case 'n':
            letterFrequency[4]++;
            break;

        }
    }

    // Return min number of characters of letterFrequency[] keeping in mind
    // that we need 2 l's & 2 o's for each "balloon"
    return min({letterFrequency[0], letterFrequency[1], letterFrequency[2]/2, letterFrequency[3]/2, letterFrequency[4]});
    
}