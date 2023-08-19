/**
 * // This is the Master's API interface.
 * // You should not implement it, or speculate about its implementation
 * class Master {
 *   public:
 *     int guess(string word);
 * };
 */
class Solution {
public:
    void findSecretWord(vector<string>& words, Master& m) {
        
        // Using of the approach of Dijstra + set approach 
        while(true){
            srand(1);
            string ans = words[rand() % words.size()];

            int matched = m.guess(ans);
            if(matched==6)return;
            vector<string>newWords;

            for(int j=0; j<words.size(); j++)
            {
                if(match(ans, words[j]) == matched) newWords.push_back(words[j]);
            }

            words=newWords;
        }

        
    }


    int match(string s, string t){
        int count = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==t[i])
            count++;
        }

        return count;
    }
};