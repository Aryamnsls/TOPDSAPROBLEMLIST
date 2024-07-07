/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == nullptr)
             return nullptr;
        ListNode*p1,*p2,*bp1;
        p1=head;
        p2=head;
        while(p2!=nullptr  && p2->next!=nullptr)
        {
            bp1=p1;
            p1=p1->next;
            p2=p2->next->next;
        }
        bp1->next=p1->next;
        return head;  
    }
};