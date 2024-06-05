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
    ListNode* rotateRight(ListNode* head, int k) {
        int nodes = 0;
        ListNode* curr = head;
        while(curr)
        {
            nodes++;
            curr = curr->next;
        }
        if(nodes == 0)
         return head;
        int rot = nodes - (k%nodes);
        if(rot == nodes)
         return head;
        ListNode* endnode;
        curr = head;
        while(1)
        {
            if(--rot == 0)
             endnode = curr;
            if(curr->next !=NULL)
             curr = curr->next;
            else
            {
                curr->next = head;
                break;
            }
        }
        head = endnode->next;
        endnode->next = NULL;
        return head;
    }
};