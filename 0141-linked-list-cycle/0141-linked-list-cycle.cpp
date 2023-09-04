
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
      // 1st Using of the Hashset

       if (head == nullptr) {
        return false;
    }

    ListNode *slow = head;
    ListNode *fast = head->next;

    while (slow != fast) {
        if (fast == nullptr || fast->next == nullptr) {
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;

      
}

};