class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        // Breakdown the concept 

        // Finding out the horizontal distance 

        int hor_dist  = abs(sy-fy);

        // Finding out the vertical Distance 

        int vert_dist = abs(sx-fx);

        // Same cordinate and time ko 1 de diya hain 

        if(hor_dist == 0 && vert_dist == 0 && t ==1){
            return false;
        }

        // Finding out the min distance time 
        int min_time = max(hor_dist, vert_dist);

        // CHecking the condition if time is smaller than min time 
        if(t<min_time)
        return false;


        return true;

        // Time Complexity :- O(1)
        // Space Complexity :- O(1)
    }
};