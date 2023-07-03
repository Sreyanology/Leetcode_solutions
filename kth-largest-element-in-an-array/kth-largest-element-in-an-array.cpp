class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxHeap; // Create a max heap using a priority queue
        for (int i = 0; i < nums.size(); i++) {
            maxHeap.push(nums[i]); // Push each element of 'nums' into the max heap
        }
        while (--k) {
            maxHeap.pop(); // Pop (remove) k-1 elements from the max heap
        }
        return maxHeap.top(); // Return the Kth largest element from the top of the max heap
    }
};