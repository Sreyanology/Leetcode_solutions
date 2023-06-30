class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int max = 0;
        for(int i=0; i<candies.size(); i++)
        {
            if(candies[i] > max)
             max = candies[i];
        }
        for(int i=0; i<candies.size(); i++)
        {
            int temp = candies[i]+extraCandies;
            if(temp>=max)
             ans.push_back(true);
            else
             ans.push_back(false);
        }

        return ans;
    }
};