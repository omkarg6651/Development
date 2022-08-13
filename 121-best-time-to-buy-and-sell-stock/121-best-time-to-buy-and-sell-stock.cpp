class Solution {
public:
    int maxProfit(vector<int>& p) {
   
    int n = p.size();
    int i = 0,j = n-1;
    int p1 = 0,minimum = p[0],p2 = 0;
    while(i<n-1)
    {
        if(p[i]<minimum)
        {
            minimum = p[i];
        }
        p1 = p[i+1]-minimum;
        if(p1>p2)
        {
            p2 = p1;
        }
        i++;
    }
    
    return p2;

    }
};