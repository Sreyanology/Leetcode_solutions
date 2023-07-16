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
    void lessnodes(ListNode* head, int k, vector<ListNode*>& ans, int n)
    {
        int nodeind = 0;
        while(head!=NULL)
        {
            ans[nodeind] = head;
            //ans[nodeind]->next = NULL;
            head = head->next;
            nodeind++;
        }
        for(int i=0; i<n; i++)
        {
            ans[i]->next = NULL;
        }
    }
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k);
        int numnodes = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            numnodes++;
            temp= temp->next;
        }
        if(numnodes == 0)
         return ans;

        if(numnodes<k)
        {  
            lessnodes(head, k, ans, numnodes);
            return ans;
        }
        int rem = numnodes%k;
        int quo = numnodes/k;

        int nodeind = 0;
        while(head && rem!=0)
        {
            ans[nodeind] = head;
            ListNode* prev;
            for(int i=0; i<(quo+1); i++)
            {
                //ans[nodeind] = head;
                prev = head;
                head = head->next;                
            }
            prev->next = NULL;
            rem--;
            nodeind++;
        }
        while(head)
        {
            ans[nodeind] = head;
            ListNode* prev;
            for(int i=0; i<quo; i++)
            {
                //ans[nodeind] = head;
                prev = head;
                head = head->next;                
            }
            prev->next = NULL;
            //rem--;
            nodeind++;
        }
        return ans;
    }
};