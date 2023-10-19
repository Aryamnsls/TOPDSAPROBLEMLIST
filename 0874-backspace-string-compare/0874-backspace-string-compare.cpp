class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // Use the stack approach 
        stack<char> stackS, stackT;
        // Process of string s
        for(char c:s)
        {
             if(c=='#'){
                 if(!stackS.empty())
                 {
                     stackS.pop();
                 }
             }else{
                 stackS.push(c);
             }
        }
        // Process of string t 

        for(char c:t)
        {
            // Check # mil to nhin gaya 
            if(c=='#')
            {
                if(!stackT.empty())
                {
                    stackT.pop();
                }
            }else{
                stackT.push(c);
            }
        }
        return stackS == stackT;
    }
};