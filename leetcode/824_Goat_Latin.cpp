class Solution
{
public:
    string toGoatLatin(string s)
    {
        string goatString = "", vowels = "aeiouAEIOU";

        // Split the string with delimiter ' '(space)
        vector<string> words = split(s, ' ');

        // Cout of 'a' to be appended after every word
        int numOfA = 1;

        for (string word : words)
        {
            // When word starts with a consonant
            if (vowels.find(word[0]) == string::npos)
            {
                // Put the first char in the end
                char firstChar = word[0];
                word.erase(0, 1);
                word += firstChar; 
            }

            // Append "ma" after each word
            word += "ma";

            // Keep appending 'a' as per numOfA
            word.insert(word.length(), numOfA, 'a');
            numOfA++;

            // Append the word with a space
            goatString += (word + ' ');

        }

        // Erase the final space
        goatString.erase(goatString.length() - 1, 1);

        return goatString;

    }

    const vector<string> split(const string& s, const char& c)
    {
        string buff{""};
        vector<string> v;

        for(auto n:s)
        {
            if(n != c) buff+=n; 
            else if(n == c && buff != "") 
            { 
                v.push_back(buff);
                buff = "";
            }
        }
        
        if(buff != "") v.push_back(buff);

        return v;
    }
};
