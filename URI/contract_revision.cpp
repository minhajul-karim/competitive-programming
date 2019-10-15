#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;

    while(1)
    {
        int i;

        // Input string1 and string2
        cin >> str1;
        cin >> str2;

        // Check the exit condition
        if (str1.compare("0") == 0 || str2.compare("0") == 0)
            break;

        // Length of str2
        int len = (int)str2.length();

        // Erase
        for (i = 0; i < len;)
        {
            // If 1st index of str1 matches the i'th index of str2, erase str2[i]
            if (str2[i] == str1[0])
                str2.erase(i, 1);
            else
                i++;
        }

        // Erase leading zeroes
        for (i = 0; (str2.length() >= 1) && str2[i] == '0';)
            str2.erase(i, 1);

        // If the str2 is empty
        if (str2.compare("") == 0)
            cout << 0 << endl;

        else
        {
            // Updated length
            len = (int)str2.length();
            for (i = 0; i < len; i++)
                cout << str2[i] - 48;
            cout << endl;
        }

    }

    return 0;
}
