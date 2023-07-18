class Solution {
public:
    int halveArray(vector<int>& nums) {
        int n = nums.size();
        priority_queue<double>pr;
        double sum = 0;
        for(int i=0; i<n; i++)
        {
             pr.push(nums[i]);
             sum = sum+nums[i];
        }

        int count = 0;
        double sumcopy = sum;
        while(sumcopy>=(sum/2.00))
        {
            if(sumcopy == (sum/2.00))
             return count;
            count++;
            double maxim = pr.top();
            pr.pop();
            sumcopy = sumcopy - maxim/2;
            pr.push(maxim/2.00);
        }

        return count;
    }
};