class Solution {
public:
    bool isPowerOfThree(int n) {
    
        int i = 0;
        long long iPro = 1;
        
        if(n == 1)
        {
            return true;
        }
        if(n == 0)
        {
            return false;
        }
        
        while(iPro <= n)
        {
            iPro = iPro * 3;
            if(iPro == n)
            {
                break;
            }
        }
        
        if(iPro == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};