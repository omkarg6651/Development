class Solution {
public:
    int firstUniqChar(string s) {
    
        int i = 0,j = 0;
        
        if(s.size() == 1)
        {
            return 0;
        }
        
        for(i=0;i<s.length();i++)
        {
            for(j=0;j<s.length();j++)
            {
                if(i != j)
                {
                    if(s[i] == s[j])
                    {
                    break;
                    }
                }
            }
            if(j == s.length())
            {
                break;
            }
        }
        
        if(i == s.length())
        {
            return -1;
        }
        else
        {
            return i;
        }
    }
};