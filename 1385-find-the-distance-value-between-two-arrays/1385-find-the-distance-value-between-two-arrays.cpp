class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int i = 0,j = 0,iCnt = 0,iDiff = 0;
        
        for(i=0;i<arr1.size();i++)
        {
            for(j=0;j<arr2.size();j++)
            {
                iDiff = arr1[i] - arr2[j];
                if(iDiff < 0)
                {
                    iDiff = -iDiff;
                }
                if(iDiff <= d)
                {
                    break;
                }
            }
            if(j == arr2.size())
            {
                iCnt++;
            }
        }
        
        return iCnt;
    }
};