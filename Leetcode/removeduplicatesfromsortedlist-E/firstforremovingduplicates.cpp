class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;  
        ListNode* last = head;
        if (head == nullptr) {
            return head;
        }
        while (curr != nullptr) {
            if (last->val != curr->val) {
                last->next = curr;
                curr = curr->next;
                last = last->next;
            } else {
                curr = curr->next;
            }
        } 
        last->next = curr;
        return head;
    }
};