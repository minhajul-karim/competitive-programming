// Linerar solution

int searchInsert(int* nums, int numsSize, int target){
    
    // If the array is NULL
    if (nums == NULL)
        return 0;
    
    // Check if element exists
    int i;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
            return i;
    }
    
    // If the target is less than the first element of array
    if (target < nums[0])
        return 0;
    
    // if element does not exist
    for (i = 0; i < numsSize - 1; i++)
    {
        if (target >= nums[i] && target <= nums[i + 1])
        {
            if (target <= nums[i])
                return i;
            else
                return i + 1;
        }
    }

    return numsSize;
    
}


