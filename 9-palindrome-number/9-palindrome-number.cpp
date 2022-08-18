class Solution {
public:
    bool isPalindrome(int x) {
    
        int iDigit = 0,iNo1 = 0;
        long int iNo2 = 0;
        
        if(x < 0)
        {
            return false;
        }
        
        iNo1 = x;
        
        while(x != 0)
        {
            iDigit = x % 10;
            iNo2 = (iNo2 *10) + iDigit;
            x = x / 10;
        }
        
        if(iNo1 == iNo2)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
        
    }
};