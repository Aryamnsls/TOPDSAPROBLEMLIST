class Solution {
public:
    string decodeAtIndex(string s, int k) {
        // 2 -pointers approach 
    //     long long size = 0;
    //     int n =  s.size();
    //     int leftSum = 0;
    //     int rightSum = 0;
       
    //    for(auto c: s)
       
    //        leftSum+=c;
       
    //    for(auto c:s)
       
    //        rightSum+=c;
    //        // Find out the k-ith index 
           
    //        for(int i = n-1; i>=0; i--)
    //        k %= size;

    //        // Check the conditon 

    //        if(k==0 && isalpha(s[i]))
    //        return string(1, s[i]); // if it returns 0 it means char found 
    //        return " ";


    // Another solution 
    long long size = 0;
    int n = s.size();
    for(int i=0; i<n; i++)
    {
        if(isdigit(s[i])){
            size *= s[i]-'0';
        }else{
            size+=1;
        }
    }

    // Start decoding 

    for(int i=n-1;  i>=0; i--)
    {
        k%=size;
        if(k==0 && isalpha(s[i])){
        return string(1,s[i]);
    }
    if(isdigit(s[i]))
    {
        size/=s[i] -'0';
    }else{
        size--;
    }   
    }

    return "";
}
};