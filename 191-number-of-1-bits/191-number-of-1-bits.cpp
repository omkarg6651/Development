class Solution {
public:
    int hammingWeight(uint32_t n) {
        int iCnt = 0,i = 0;
        
        for(i=0;i<32;i++)
        {
            if((n&1) == 1)
            {
                iCnt++;
            }
            n = n >> 1;
        }
        
        return iCnt;
    }
};