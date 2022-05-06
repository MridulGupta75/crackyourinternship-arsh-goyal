class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0,r=1,s=nums.size();
      while(r<s)
      {
          if(nums[r]==0)
          {
              if(nums[l]!=0)
                  l=r;
          }
          else
          {
              if(nums[l]==0)
              swap(nums[l],nums[r]);
              l++;
          }
          r++;
      }
        
    }
};