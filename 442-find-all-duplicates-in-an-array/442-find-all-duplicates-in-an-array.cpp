class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>sol;
        for(int i=0;i<nums.size();i++)
        {
            int k=nums[abs(nums[i])-1];
            if(nums[abs(nums[i])-1]>0)nums[abs(nums[i])-1]*=-1;
            else sol.push_back(abs(nums[i]));
        }
        return sol;
    }
};



