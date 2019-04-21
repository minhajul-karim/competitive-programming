char* longestCommonPrefix(char** strs, int strsSize) {
    
    // if strs is NULL or there're no strings is strs
    if (strs == NULL || strsSize == 0)
        return "";

    int i, j, counter = 0, len[strsSize];
    char temp;
    char* res;
    res = (char*)malloc(sizeof(char) * (strlen(strs[0]) + 1));
    if (res == NULL)
    {
        fprintf(stderr, "can not allocate\n");
        exit(1);
    }

    // Copy an empty string to res
    strcpy(res, "");

    // Generate lengths of all strings
    for (i = 0; i < strsSize; i++)
        len[i] = strlen(strs[i]);

    // Loop through all strings char by char
    for (i = 0; ; i++)
    {
        // i is within the length of the 1st str
        if (i < len[0])
        {
            // i'th char of strs[0]
            temp = strs[0][i];

            for (j = 1; j < strsSize; j++)
            {
                // if i is within the limit of strs[j]
                if (i < len[j])
                {
                    // Char doesn't match for temp
                    if (strs[j][i] != temp)
                    {
                        // Check if any matches happened before
                        if (counter == 0)
                            return res;
                        else
                        {
                            // return the prefix found with terminating with NULL char
                            res[counter] = '\0';
                            return res;
                        }
                    }
                }

                // i is out of the size of strs[j]
                else
                {
                    // Check if any matches happened before
                    if (counter == 0)
                        return res;
                    else
                    {
                        // return the prefix found with terminating with NULL char
                        res[counter] = '\0';
                        return res;
                    }
                }

            }
            // Char matches with temp
            res[counter++] = temp;

        }

        // If the 1st char of 1st string is NULL
        else
        {
            break;
        }
    }

    // Check if any matches happened before
    if (counter == 0)
        return res;

    // return the prefix found with terminating with NULL char
    else
    {
        res[counter] = '\0';
    }

    return res;
}
