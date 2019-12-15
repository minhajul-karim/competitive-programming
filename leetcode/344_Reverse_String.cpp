class Solution 
{
public:
    void reverseString(vector<char> &s)
    {
        // Size of the vector
        unsigned int lenOfS = s.size();
        
        // When the the string is empty
        if (lenOfS == 0)
        {
            return;
        }
        
        // Variables to keep track of the start
        // and the end of the vector
        unsigned int left = 0, right = lenOfS - 1;
        
        // Keep swapping the left and right end of 
        // the vector until we reach the middle point
        while(left < right)
        {
            char tempChar = s[left];
            s[left] = s[right];
            s[right] = tempChar;
            left++;
            right--;
        }
    }
};
