class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(), nums.end());

        int k = 0;
        //if(nums[0] == val)
        // return 0;


        int high = nums.size()-1;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == val && nums[high] == val)
             return k;
            else if(nums[i]!= val)
             k++;
            else if(nums[i] == val && nums[high]!=val && i<high)
            {
                swap(nums[i], nums[high]);
                k++;
                high--;
            }
        }

        return k;
    }
};