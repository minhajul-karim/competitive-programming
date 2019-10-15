/* Idea source: https://leetcode.com/problems/plus-one/discuss/24084/Is-it-a-simple-code(C%2B%2B) */

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) 
    {
        // Size of digits
        int len = digits.size();
        
        // Travarse digits from back
        for (int i = len-1; i >= 0; i--)
        {
            // If i'th index contains 9
            if (digits[i] == 9)
                digits[i] = 0;
            else
            {
                // Increment the val of i'th index
                digits[i]++;
                return digits;
            }
        }
        
        // Make the very 1st index 1, push 0 at end
        digits[0] = 1;
        digits.push_back(0);
        
        return digits;
    }
};
