class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i = 0;
        
        sort(nums.begin(),nums.end());
        
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                break;
            }
        }
        
        if(i == nums.size()-1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};