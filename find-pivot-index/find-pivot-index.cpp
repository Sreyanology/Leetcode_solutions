class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //int index = -1;
        int leftsum = 0;
        int rightsum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            rightsum+=nums[i];
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(i!=0)
             leftsum+=nums[i-1];
            rightsum-=nums[i];
            if(leftsum == rightsum)
             return i;
        }
        return -1;
    }
};