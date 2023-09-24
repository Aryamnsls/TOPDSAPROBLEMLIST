class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length(), m = t.length();
        int j = 0;

        // For Index of s(subsquence)

        // Traverse the s and t 
        // Compare the current elemnt 
        // s with first unmatched char
        // Then move ahead in s 

        for(int i=0; i<m && j<n; i++)
        if(s[j]==t[i])
        j++;
         
        
        return(j==n);
    }
};