class Solution
{
public:
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
            for (char ch : email)
            {
                if (ch == '+' || ch == '@')
                {
                    break;
                }

                else if (ch == '.')
                {
                    continue;
                }

                sanitizedEmail += ch;

            }

            // Add the domain behind sanitized local
            sanitizedEmail += email.substr(email.find('@'));
            uniqueEmails.insert(sanitizedEmail);
        }

        return uniqueEmails.size();
    }
};
