// Recursion with memoization

class Solution {
public:
    int climbStairs(int num) 
    {
        int memoSize = num + 1;
        int memo[memoSize];
        
        // Initialize the array
        for (int i = 0; i < memoSize; i++)
            memo[i] = -999999;
        
        return climbStairsCalculation(0, num, memo);
    }
    
    int climbStairsCalculation(int i, int n, int memo[])
    {
        if (i == n)
            return 1;
        
        else if (i > n)
            return 0;
        
        else if (memo[i] > -999999)
            return memo[i];
        
        memo[i] = climbStairsCalculation(i+1, n, memo) + climbStairsCalculation(i+2, n, memo);
        return memo[i];
        
    }

};
