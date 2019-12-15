#include <set>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int numUniqueEmails(vector<string> &emails);

int main()
{
    vector<string> emails{"a@leetcode.com","b@leetcode.com","b@leetc.ode.com"};

    cout << numUniqueEmails(emails) << endl;

    return 0;
}

int numUniqueEmails(vector<string> &emails)
{
    // Check for empty list
    if (emails.size() == 0)
    {
        return 0;
    }

    // Declare a set for unique emails
    set<string> uniqueEmails;

    for (string email : emails)
    {
        string sanitizedEmail = "";
        
        // Copy raw email to sanitizedEmail
        for (int i = 0; i < email.length(); i++)
        {
            // Ignore characters from '+' until '@'
            if (i >= email.find("+") && i < email.find("@"))
            {
                continue;
            }

            // Concatenate the rest of the address after '@'
            else if (email[i] == '@')
            {
                sanitizedEmail += email.substr(i);   
                break;
            }

            // Ignore dot(.)s
            else if (email[i] != '.')
            {
                sanitizedEmail += email[i];
            }
        }

        uniqueEmails.insert(sanitizedEmail);   
    }

    return uniqueEmails.size();

}
