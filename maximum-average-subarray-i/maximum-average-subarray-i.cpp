class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        int n = nums.size();
        int sum = 0;
        double avg;
        for(int i=0; i<n; i++)
        {
            if(i<k)
             sum+=nums[i];
            else
            {
                avg = sum/(double)k;
                ans = max(ans, avg);
                sum+=nums[i]-nums[i-k];
            }
        }
        avg = sum/(double)k;
        ans = max(ans, avg);
        return ans;
    }
};