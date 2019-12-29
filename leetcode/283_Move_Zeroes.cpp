class Solution
{
public:
    void moveZeroes(vector<int> &myvector) 
    {
        // When the vector is emtpy
        if (myvector.empty())
        {
            return;   
        }
        
        // Number of elements
        int numOfElement = myvector.size(), position = 0;
        
        // Bring the non-zero elements to the front
        for (int i = 0; i < numOfElement; i++)
        {
            if (myvector[i] != 0)
            {
                myvector[position++] = myvector[i];
            }
        }
        
        // Push 0's to the end
        while(position < numOfElement)
        {
            myvector[position++] = 0;
        }
    }
};
