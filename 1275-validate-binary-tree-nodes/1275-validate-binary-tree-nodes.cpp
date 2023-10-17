class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        // Using of the Heap Approach to solve the problem 
        // step 1 :- set the deque 
        deque<int>queue;
        // Step 2:- Set the set fucntion 
        unordered_set<int>visited;
        // Function to check the left-subtree and right-subtree
        int root = findRoot(n,leftChild, rightChild);
        // check the root == -1 
        if(root==-1){
            return false;
        }

        // Start the root node 
        queue.push_back(root);
        // Check for the queue 
        while(!queue.empty()){
            int node = queue.front();
            queue.pop_front();

            if(node==-1) 
            continue;

            if(!visited.insert(node).second) return false;
            int left = leftChild[node];
            int right = rightChild[node];

            queue.push_back(left);
            queue.push_back(right);

        }
        // return the ans 
        return visited.size()==n;
    }
    private:

    // to check for the parent node for each subtree
    int findRoot(int n, vector<int>&left,vector<int>&right)
    {
       // Create a set function to store the values: key 
       unordered_set<int>set;
       // Traverse the loop 
       for(int i = 0; i<n; i++) set.insert(i);
       for(int node:left)set.erase(node);
       for(int node:right)set.erase(node);
       
       return set.size()==1 ? *set.begin(): -1; 
        
    }

};