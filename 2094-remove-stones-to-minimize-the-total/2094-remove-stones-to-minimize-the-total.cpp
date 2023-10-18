class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
     priority_queue<int>maxHeap;
     for(int i= 0; i<piles.size(); i++){
     maxHeap.push(piles[i]);
    }

    while(k--)
    {
        int maxElement = maxHeap.top();
        maxHeap.pop();
        // Main formula 
        maxElement = maxElement - floor(maxElement/2);
        // Inserting the maxElement to the maxHeap 
        maxHeap.push(maxElement);
    }
        // Calculate the sum 
        int sum = 0;
        // jab tak maxHeap khatam nahin ho jata tab tak chalta rahega 
        while(!maxHeap.empty())
        {
            int temp = maxHeap.top();
            maxHeap.pop();
            sum+=temp;
        }
        return sum;
    }
};