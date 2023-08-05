class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        int start = n-k;

        vector<int>ans;
        while(start<n)
        {
            ans.push_back(nums[start++]);
        }

        for(int i=0; i<start; i++)
        {
            ans.push_back(nums[i]);
        }

        for(int i=0; i<n; i++)
         nums[i] = ans[i];

    }
};