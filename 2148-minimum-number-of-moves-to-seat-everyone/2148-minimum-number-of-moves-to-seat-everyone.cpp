class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
         std::sort(seats.begin(), seats.end());
        std::sort(students.begin(), students.end());

        int totalMoves = 0;
        // Calculate the total moves required to pair each student with a seat
        for (int i = 0; i < seats.size(); ++i) {
            totalMoves += std::abs(seats[i] - students[i]);
        }
        
        return totalMoves;
    }
};