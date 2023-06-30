class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int max = 0;
        while(left<right)
        {
            int area = 0;
            if(height[left] > height[right])
             area = (right-left)*height[right];
            else
             area = (right-left)*height[left];
            if(max < area)
             max = area;
            
            if(height[left] < height[right])
             left++;
            else
             right--;
        }
        return max;
    }
};