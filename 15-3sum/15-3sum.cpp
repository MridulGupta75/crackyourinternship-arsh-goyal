class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>>sol;
        sort(nums.begin(),nums.end());
        //if(nums.empty())return sol;
        for(int i=0;i<nums.size();i++)
        { 
            if(i==0||(i>0&&nums[i]!=nums[i-1]))
            {
            int j=i+1,k=nums.size()-1;
            int req=-nums[i];
            while(j<k)
            {
                if(nums[j]+nums[k]==req)
                {
                    vector<int>subsol;
                    subsol.push_back(nums[i]);
                    subsol.push_back(nums[j]);
                    subsol.push_back(nums[k]);
                    sol.push_back(subsol);
                    while(j<k&&nums[j]==nums[j+1])j++;
                    while(j<k&&nums[k]==nums[k-1])k--;
                    j++,k--;
                }
                else if(nums[j]+nums[k]<req)j++;
                else k--;
            }
            }
        }
        
        return sol;
    }
};