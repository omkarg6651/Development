class Solution {
public:
    int missingNumber(vector<int>& nums) {
    
        int iNo = nums.size();
        int i = 0,j = 0;
        
        for(i=0;i<=nums.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                if(nums[j] == i)
                {
                    break;
                }
            }
            if(j == nums.size())
            {
                break;
            }
        }
        
        return i;
        
    }
};