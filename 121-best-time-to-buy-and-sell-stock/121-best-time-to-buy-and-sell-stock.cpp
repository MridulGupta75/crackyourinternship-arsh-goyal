class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxpro=0;
        int minpr=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            minpr=min(minpr,nums[i]);
            maxpro=max(maxpro,nums[i]-minpr);
        }
        return maxpro;
    }
};