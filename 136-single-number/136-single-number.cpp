class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i = 0,j = 0;
        
        sort(nums.begin(),nums.end());
        
        for(i=nums.size()-1;i>=0;i--)
        {
            if(nums.size() == 1)
            {
                break;   
            }
            else if(nums[i] == nums[i-1])
            {
                nums.pop_back();
                nums.pop_back();
                i--;
            }
            else 
            {
                break;
            }
        }
        
        if(i>=0)
        {
            return nums[i];
        }
        else 
        {
            return 0;
        }
    }
};