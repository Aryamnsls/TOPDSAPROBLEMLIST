class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        // Build an adjacency list to represent the flights
        unordered_map<string, multiset<string>> flights;
        for (const auto& ticket : tickets) {
            flights[ticket[0]].insert(ticket[1]);
        }
        
        vector<string> itinerary;
        stack<string> dfsStack;
        dfsStack.push("JFK");

        while (!dfsStack.empty()) {
            string from = dfsStack.top();

            if (flights[from].empty()) {
                // If there are no more outgoing flights, add the airport to the itinerary
                itinerary.push_back(from);
                dfsStack.pop();
            } else {
                // Visit the next airport in lexical order
                auto to = flights[from].begin();
                dfsStack.push(*to);
                flights[from].erase(to);
            }
        }

        // Reverse the itinerary to get the correct order
        reverse(itinerary.begin(), itinerary.end());
        
        return itinerary;
    }
};