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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>v;
        ListNode* a = head;
        while(a)
        {
            v.push_back(a->val);
            a = a->next;
        }
        int n = v.size();
        a = head;
        int c = 1;
        while(a)
        {
            if(c == left)
            {
                for(int i=right-1; i>=(left-1); i--)
                {
                    a->val = v[i];
                    a = a->next;
                }
            }
            c++;
            if(a!=NULL)
                a = a->next;
        }
        return head;
    }
};