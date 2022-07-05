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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
       int save_data;
       ListNode* dummy = new ListNode(0);
       ListNode* next_dummy = dummy;
       while (list1 != NULL && list2 != NULL)
       {
           if (list1->val > list2->val)
           {
               save_data = list2->val;
               list2 = list2->next;
           }
           else if(list1->val <= list2->val)
           {
               save_data = list1->val;
               list1 = list1->next;
           }
           dummy->next= new ListNode(save_data);
           dummy = dummy->next;
        }
        while (list1 != NULL)
       {
           dummy->next = new ListNode(list1->val);
           dummy = dummy->next;
           list1 = list1->next;
       }
       while (list2 != NULL)
       {
           dummy->next = new ListNode(list2->val);
           dummy = dummy->next;
           list2 = list2->next;
       }
       return next_dummy->next;
       
    }
};