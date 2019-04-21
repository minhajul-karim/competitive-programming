bool isValid(char* s) {
    
    // if the string is empty
    if (strcmp(s, "") == 0)
        return true;
    
    int i, top = -1, len = strlen(s);
    char str[len];
    
    // Travarse s
    for (i = 0; i < len; i++)
    {
        // Search for opening brackets
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            // Push into str
            top++;
            str[top] = s[i];
        }
        else
        {
            // Closing found
            if (top >= 0)
            {
                // If we have any opening in str
                if ((str[top] == '(' && s[i] != ')') || (str[top] == '{' && s[i] != '}') || (str[top] == '[' && s[i] != ']'))
                {
                    return false;
                }

                else
                {
                    // Matched, Pop from str
                    top--;
                }
            }
            
            else
            {
                // str is empty
                return false;
                
            }
        }
    }
    
    if (top == -1)
        return true;
    else
        return false;
}
