class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        // When the vector is emtpy
        if (nums.empty())
        {
            return 0;
        }
        
        int counter = 0;
        
        // Travarse the vector & check the number of digits
        // for each element
        for (int num : nums)
        {
            // Check if the number of digits are even
            if (numOfDigits(num) % 2 == 0)
            {
                counter++;
            }
        }
        
        return counter;
        
    }
    
    // Function to find out the number of digits of a number, N
    int numOfDigits(int n)
    {
        int digits = 0;

        // Keep dividing n until it reaches 0
        while (n != 0)
        {
            n /= 10;
            digits++;
        }

        return digits;

    }
};
