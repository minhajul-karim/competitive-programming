int lengthOfLastWord(char * s)
{
    // Length of s
    int len = strlen(s);
    int i, j, length = 0;

    // Check for non-space char from the end
    for (i = len-1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            j = i;
            // Increment length until we hit a space
            while (j >= 0)
            {
                length++;
                j--;
                if (j >= 0 && s[j] == ' ')
                    return length;
            }
            
            // Completed checking s
            return length;
        }
    }
    
    // No alphabet found
    return length;    
    
}
