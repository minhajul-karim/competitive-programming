class Solution
{
public:
    string defangIPaddr(string address)
    {
        for (int i = 0; i < address.length();)
        {
            // Replace the dot with [.]
            if (address[i] == '.')
            {
                address.replace(i, 1, "[.]");
                
                // Move i to the next digit
                i += 3;
            }

            i++;
        }
        
        return address;
    }
};
