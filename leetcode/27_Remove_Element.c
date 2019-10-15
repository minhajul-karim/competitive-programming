int removeElement(int* nums, int numsSize, int val){
    
    // Check if the array is null   
    if (nums == NULL || numsSize == 0)
        return 0;
    
    int counter = 0;
    /*
        We check through the array. If nums[i] != val we skip it & increment counter.
        If nums[i] == val, we start another loop from j = i + 1 and seek for any value which is != val.
        Swap it with j if found and break.
    */
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == val)
        {
            for (int j = i + 1; j < numsSize; j++)
            {
                if (nums[i] != nums[j])
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    counter++;
                    break;
                }
            }
        }
        else
        {
            counter++;
        }
    }
    
    return counter;

}
