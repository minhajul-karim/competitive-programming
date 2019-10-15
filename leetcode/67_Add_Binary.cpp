/* Idea source: https://leetcode.com/problems/add-binary/discuss/24475/Short-code-by-c%2B%2B */

class Solution {
public:
    string addBinary(string a, string b) 
    {
        // Length of a, b
        int a_len = a.length(), b_len = b.length();
        int i = a_len - 1, j = b_len - 1, sum = 0;
        
        // Declare the resultant string
        string res;
        
        /* Travarse both strings from the back & add digits until we exhaust both
        strings and after exhaustion append the remaining sum(e.g., carry) into result */
        
        while(i >= 0 || j >= 0 || sum > 0)
        {
            if (i >= 0)
            {
                // Cast a[i] into an int then add
                sum += a[i] - '0';
                i--;
            }

            if (j >= 0)
            {
                // Cast b[i] into an int then add
                sum += b[j] - '0';
                j--;
            }
            
            // Cast the remainder into a char & append to res
            res += (sum % 2) + '0';
            sum /= 2;
        }

        // Reverese res
        reverse(res.begin(), res.end());
        
        return res;

    }
};
