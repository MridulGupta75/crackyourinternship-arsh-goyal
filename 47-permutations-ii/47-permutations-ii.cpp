// class Solution {
// public:
//     void combo(vector<int>& nums,vector<vector<int>>&sol,vector<int>& subsol,int k)
//     {
//         if(subsol.size()==nums.size())
//         {
//             sol.push_back(subsol);
//             return;
//         }
//          else
//          {
//            for(int i=k;i<nums.size();i++)
//            {    
//                 if(k==i&&i!=0&&(i+1)!=nums.size())i++;
//                subsol.push_back(nums[i]);
//                 combo(nums,sol,subsol,k+1);
//            }
//        }
//      }
//     vector<vector<int>> permuteUnique(vector<int>& nums) {
//         vector<vector<int>>sol;
//         vector<int>subsol;
//         combo(nums,sol,subsol,0);
//         return sol;
//     }
// };
class Solution {
public:
    vector<vector<int>>res;
    void combi(vector<int>& s,vector<int>& n,vector<int>& v)
    {
        if(s.size()==n.size() && !binary_search(res.begin(),res.end(),s))
        {
            res.push_back(s);
            return;
        }
        for(int i=0;i<n.size();i++)
        {
            if(v[i] || (i>0 &&n[i]==n[i-1]&&v[i-1] ))continue;
            v[i]=1;
            s.push_back(n[i]);
            combi(s,n,v);
            s.pop_back();
            v[i]=0;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>sol,vis(nums.size(),0);
        sort(nums.begin(),nums.end());
        combi(sol,nums,vis);
        return res;
    }
};