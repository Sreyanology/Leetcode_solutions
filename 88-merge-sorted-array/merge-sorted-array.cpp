class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int low1= 0;
        int low2 = 0;
        vector<int>ans;
        while(low1 < m || low2 < n)
        {
            if(low1< m && low2 < n)
            {
                (nums1[low1] < nums2[low2]) ? ans.push_back(nums1[low1++]) : ans.push_back(nums2[low2++]);
            }
            else if(low1 < m)
             ans.push_back(nums1[low1++]);
            else if(low2 < n)
             ans.push_back(nums2[low2++]);
        }
        for(int i=0; i<(m+n); i++)
         nums1[i] = ans[i];
    }
};