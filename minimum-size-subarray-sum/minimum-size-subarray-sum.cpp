class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int i=0, j=0;
        //vector<int>subarr;
        int subarr = INT_MAX;
        for(int el=0; el<n; el++)
        {
            sum+=nums[el];
            //if(sum<target)
            // j++;
            if(sum>=target)
            {
                while(sum>=target && i<=el)
                {
                    sum = sum - nums[i];
                    i++;
                }
                subarr = min(subarr, el-i+2);
            }
            //if(sum == target)
             //subarr.push_back(el-i+1);
            
        }
        if(subarr == INT_MAX)
         return 0;
        return subarr;
    }
};