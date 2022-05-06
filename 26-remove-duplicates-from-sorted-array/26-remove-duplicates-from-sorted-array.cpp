class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     // nums.erase(unique(nums.begin() ,nums.end()),nums.end() ); 
     //  return nums.size();
        int i,j,k;
        k=nums.size();
        if(k==1)
            return k;
        for(i=0,j=1;j<k;)
        {
            if(nums[i]==nums[j])
                j++;
            else
            {
                nums[i+1]=nums[j];
                j++;
                i++;
            }
        }
        return i+1;
    }
};