class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int>charCount;

        // Traverse the char s 
        for(char c: s){
            charCount[c]++;
        }
        // Traverse the char t  
        for(char c:t){
           if(charCount.find(c)== charCount.end() || charCount[c]==0){
               return c;
           }
           charCount[c]--;

        }

        // All the characters are the same expect of one character 

        for(const auto&pair : charCount){
            if(pair.second !=0)
            {
                return pair.first;
            }
        }

       return ' ';
    }
};