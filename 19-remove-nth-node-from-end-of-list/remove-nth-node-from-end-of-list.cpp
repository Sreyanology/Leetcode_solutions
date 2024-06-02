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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int num_nodes = 0;
        while(curr!=NULL)
        {
            num_nodes++;
            curr = curr->next;
        }
        if (n == num_nodes)
         return head->next;
        curr = head;
        ListNode* rem = head;
        int delnum = num_nodes - n;
        while(delnum!=0)
        {
            curr = rem;
            rem = rem->next;
            delnum--;
        }
        curr->next = rem->next;
        return head;
    }
};