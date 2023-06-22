class Solution {
public:
    int maxSubArray(vector<int>& nums) {
           int max_ans = INT_MIN;
           int max_it = 0;
           for(int i=0; i<nums.size(); i++)
           {
               max_it = max_it + nums[i];
               if(max_ans < max_it)
                 max_ans = max_it;
                if(max_it < 0)
                 max_it = 0;
           }
           return max_ans;
    }

};