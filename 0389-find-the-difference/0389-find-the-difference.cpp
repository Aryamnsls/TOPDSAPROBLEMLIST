class Solution {
public:
    char findTheDifference(string s, string t) {
        //   // Firstly find the length

        //   // Using the two pointer approach 
        //  char m = s.length(), n = t.length();
        //  char cnt = 0;
        //  for(int i = 0; i<m; i++)
         
        //      for(int j = n-2; j>=1; j--)
             
        //          if(s[i]==t[j])
        //          // swap 
        //     //    swap(s.first(), s.end() && t.first(), t.end());
        //          cnt++;
             
         
        //  return cnt;

        // Using of ASCII Approach 

         // Initialize two variables to store the ASCII values of characters in s and t
    int charSumS = 0;
    int charSumT = 0;

    // Calculate the sum of ASCII values of characters in s
    for (char c : s) {
        charSumS += c;
    }

    // Calculate the sum of ASCII values of characters in t
    for (char c : t) {
        charSumT += c;
    }

    // The extra character in t will have a higher sum than the sum of characters in s
    // So, subtract the sum of characters in s from the sum of characters in t to find the ASCII value of the extra character
    int diff = charSumT - charSumS;

    // Convert the ASCII value back to a character and return it
    return diff;
    }
};