class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string st = s;
        for(int i=0; i<s.size()-1; i++)
        {
             st.push_back(st[0]);
             st.erase(0,1);

             if(st==s)
             {
                 return true;
             }
        }

        return false;
    }
};