class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int i=0;
        // for(i=0;i<nums.size();i++)
        //     if(nums[i]==nums[i+1])
        //         break;
        //         return nums[i];
        int slow=nums[0],fast=nums[0];
      do{
          slow=nums[slow];
          fast=nums[nums[fast]];
          
      }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};