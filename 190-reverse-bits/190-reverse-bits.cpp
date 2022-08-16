class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int i = 0,iPos = 0;
        uint32_t iRes = 0;
        
        for(i=31;i>=0;i--)
        {
           if((n & 1) == 1)
            {
                iPos = 1 << i;
                iRes = iRes | iPos;
            } 
            
            n = n >> 1;
        }
        return iRes;  
           
    }
};