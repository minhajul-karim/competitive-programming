class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &A)
    {
        // When the vector is empty
        if (A.empty())
        {
            return {};
        }
        
        // Declare vector to store even & odd values
        vector<int> even, odd;
        
        // Push even & odd values to corresponding vectors
        for (int i : A)
        {
            // When the value is even
            if (i % 2 == 0)
            {
                even.push_back(i);
            }
            
            else
            {
                odd.push_back(i);
            }
        }
        
        // Create a new vector to return
        vector<int> result;
        
        // Insert even into result
        result.insert(result.begin(), even.begin(), even.end());
        
        // Insert odd into result
        result.insert(result.end(), odd.begin(), odd.end());
        
        return result;
    }
};
