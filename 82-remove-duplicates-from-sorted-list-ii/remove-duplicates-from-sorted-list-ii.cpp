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
    ListNode* deleteDuplicates(ListNode* head) {
        int n = 0;
        while(1)
        {
            if(head && head->next && (head->val == head->next->val))
            {
                head = head->next;
                n++;
            }
            else 
             break;
        }
        if(n!=0)
         head = deleteDuplicates(head->next);
        if(head == NULL || head->next == NULL)
         return head;
        
        n=0;
        ListNode* slow = head;
        ListNode* temp = head;
        ListNode* fast = head->next;
        while(fast)
        {
            if(fast->next)
            {
                if(fast->val == fast->next->val)
                {
                     //fast = fast->next;
                     n++;
                }
                else if(n == 0)
                {
                    slow->next = fast;
                    slow = fast;
                    //fast = fast->next;
                }
                else
                {
                    //fast = fast->next;
                    n = 0;
                }
            }
            temp = fast;
            fast = fast->next;
        }
        if(n == 0)
         slow->next = temp;
        else
         slow->next = NULL;
        return head;
    }
};