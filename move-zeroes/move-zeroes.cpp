class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = nums.size();
        for(int i=1; i<l; i++)
        {
            int j=i;
            while(j!=0 && nums[j-1] == 0 && nums[j]!=0)
            {
                swap(nums[j-1], nums[j]);
                j--;
            }
        }
    }
};