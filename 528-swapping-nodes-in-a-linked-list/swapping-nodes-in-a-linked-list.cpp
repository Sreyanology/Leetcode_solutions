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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>v;
        ListNode* x = head;
        while(x)
        {
            v.push_back(x->val);
            x = x->next;
        }
        int n = v.size();
        int l = 1;
        x = head;
        while(x)
        {
            if(l == k)
             x->val = v[n-k];
            else if(l == (n-k+1))
             x->val = v[k-1];
            l++;
            x = x->next;
        }
        return head;
    }
};