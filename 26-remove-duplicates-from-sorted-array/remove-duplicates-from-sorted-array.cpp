class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
         return 0;
        
        vector<int>ans;
        int m = nums[0];
        ans.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]!=m)
            {
                ans.push_back(nums[i]);
                m = nums[i];
            }
        }

        nums.resize(ans.size());
        nums = ans;

        return ans.size();
    }
};