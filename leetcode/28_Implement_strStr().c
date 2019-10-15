int strStr(char * haystack, char * needle){
    
    // Check for NULL pointer
    if (haystack == NULL || needle == NULL)
        return 0;

    // Check for empty string
    else if (strcmp(needle, "") == 0)
       return 0;
    
    // Determine the lengths of both strings
    int haystack_len = (int)(strlen(haystack));
    int needle_len = (int)(strlen(needle));
    
    // Determine the length for a temporary string
    int temp_len = haystack_len >= needle_len ? haystack_len : needle_len;
    
    // Create a temporary string
    char temp[temp_len + 1];
    
    for (int i = 0; i < haystack_len; i++)
    {
        // If needle[0] matches haystack[i]
        if (haystack[i] == needle[0])
        {
            // Check if from i'th position onwards, haystack can accomodate needle
            if (i + (needle_len - 1) < haystack_len)
            {
                // Copy from i'th pos to needle length into temp
                strncpy(temp, haystack+i, needle_len);
                temp[needle_len] = '\0';

                // Match temp with needle
                if (strcmp(temp, needle) == 0)
                {
                    return i;
                }

            }
        }
    }

    // Loop has finished. No match found
    return -1;   
}


