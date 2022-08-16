class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char>sv;
        vector<char>st;
        int i = 0;
        
        for(i=0;i<s.length();i++)
        {
            sv.push_back(s[i]);
        }
        for(i=0;i<t.length();i++)
        {
            st.push_back(t[i]);
        }
        
        sort(sv.begin(),sv.end());
        sort(st.begin(),st.end());
        
        if(sv == st)
        {
            return true;
        }
        else
        {
            return false;
        }
            
        
        
    }
};