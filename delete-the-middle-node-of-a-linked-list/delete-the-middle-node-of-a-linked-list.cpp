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
        ListNode* trav = head;
        int nodes = 1;
        while(trav->next)
        {
            nodes++;
            trav=trav->next;
        }
        if(nodes == 1)
         return nullptr;
        int delindex=nodes/2;
        trav = head->next;
        int ind = 0;
        ListNode* lazy = head;
        while(1)
        {
            ind++;
            if(ind == delindex)
            {
                lazy->next = trav->next;
                break;
            }
            else
            {
                lazy=lazy->next;
                trav=trav->next;
            }
        }
        
        return head;
    }
};