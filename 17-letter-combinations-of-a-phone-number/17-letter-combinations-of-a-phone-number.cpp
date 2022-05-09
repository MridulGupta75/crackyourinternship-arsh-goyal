// class Solution {
//       vector<string>c;
// public:
//     //vector<pair<int,string>>
//     void getcombo(string combo[],string digit,int i,string s)
//     {
//         if(i==digit.length())
//         {
//             c.push_back(s);
//             return;
//         }
//         else
//         {
//           // string str=combo[(digit[i]-'0')-2].second;
//             string str=combo[digit[i]-'0'];
//             for(int j=0;j<str.length();i++)
//             getcombo(combo,digit,i+1,s+str[j]);
//         }
//     }
//     vector<string> letterCombinations(string digits) {
//         // vector<pair<int,string>>combo;
//         if(digits.length()==0)return c;
//         // int x=97;
//         // for(int i=2;i<=9;i++)
//         // {
//         //     int m;
//         //     string str="";
//         //     if(i==7||i==9)
//         //     {
//         //         m=4;
//         //         while(m--){
//         //         str+=(char)x;
//         //              x++;}
//         //         combo.push_back({i,str}); }
//         //     else {
//         //         m=3;
//         //         while(m--){
//         //             str+=(char)x;
//         //             x++;}
//         //          combo.push_back({i,str});} }
// //         for(int i=0;i<combo.size();i++)
// //         {
// //             cout<<i<<" "<<combo[i].first<<" "<<combo[i].second<<endl;
// //         }
//         string combo[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//         getcombo(combo,digits,0,"");
//             return c;
//     }
    
// };
class Solution {
public:
    void myLetterComb(string digits, vector<string> &res, string nums[], int i, string s){
        if(i == digits.length()){
            res.push_back(s);
            return;
        }
        string val = nums[digits[i] - '0'];
        for(int j=0;j<val.length(); j++)
            myLetterComb(digits, res, nums, i+1, s+val[j]);
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.length() == 0)
            return res;
        string nums[10] = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        myLetterComb(digits, res, nums, 0, "");
        return res;
    }
};