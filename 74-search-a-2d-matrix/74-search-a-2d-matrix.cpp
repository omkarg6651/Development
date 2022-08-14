class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0,j = 0;
        bool flag = false;
        
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j] == target)
                {
                    flag = true;
                    break;
                }
            }
            if(j<matrix[i].size())
            {
                break;
            }
        }
        
        return flag;
    }
};