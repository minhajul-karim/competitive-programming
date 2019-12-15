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
            auto indexOfAtTheRateOf = email.find('@');
            string local = email.substr(0, indexOfAtTheRateOf),
            domain = email.substr(indexOfAtTheRateOf), sanitizedEmail = "";

            // Copy raw email to sanitizedEmail
            for (char ch : local)
            {
                if (ch == '+')
                {
                    break;
                }

                else if (ch == '.')
                {
                    continue;
                }

                else
                {
                    sanitizedEmail += ch;
                }

            }

            // Add the domain behind sanitized local
            sanitizedEmail += domain;

            uniqueEmails.insert(sanitizedEmail);
        }

        return uniqueEmails.size();
    }
};
