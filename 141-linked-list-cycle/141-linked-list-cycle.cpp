/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode* fast = head;
        while(head && fast && fast->next)
        {
            head = head->next;
            if(fast->next->next == head)
                return true;
            fast = fast->next->next;
        }
        return false;
    }
};