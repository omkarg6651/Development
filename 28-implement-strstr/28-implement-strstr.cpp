class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int i = 0,j = 0,k = 0,l = 0;
        
        for(i=0;i<needle.length();i++)
        {
            for(j=0;j<haystack.length();j++)
            {
                if(haystack[j] == needle[i])
                {
                    for(k=i,l = j;k<needle.length();k++,l++)
                    {
                        if(haystack[l] != needle[k])
                        {
                            break;
                        }
                    }
                    if(k == needle.length())
                    {
                        break;
                    }
                }
                
            }
            if(j == haystack.length())
            {
                return -1;
            }
            else 
            {
                return j;
            }
        }
        return -1;
    }
};