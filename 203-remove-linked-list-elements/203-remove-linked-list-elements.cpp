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
    ListNode* removeElements(ListNode* head, int val) 
    {
        if(!head)
            return head;
        ListNode* del;
        while(head && head->val == val)
        {
            del = head;
            head=head->next;
            delete del;
        }
        del=head;
        while(del && del->next)
        {
            if(del->next->val == val)
                del->next = del->next->next;
            else del = del->next;
        }
        return head;
    }
};