int removeDuplicates(int* nums, int numsSize)
{
    // Check if the array is null   
    if (nums == NULL || numsSize == 0)
        return 0;
    
    int i = 0;

    /*
        iterate from the 2nd index. If nums[j] == nums[i], they're
        duplicates. Skip them. If nums[j] != nums[i], pull nums[j]
        & place it right after i'th position.
    */
    for (int j = 1; j < numsSize; j++)
    {
        if (nums[i] != nums[j])
        {
            nums[i + 1] = nums[j];
            i++;
        }
    }

    return i + 1;
}
