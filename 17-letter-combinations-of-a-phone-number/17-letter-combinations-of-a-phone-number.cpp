class Solution {
    vector<string>sol;
public:
    void getcombo(string arr[],string digits,int i,string s)
    {
        if(i==digits.length())
        {
            sol.push_back(s);
            return;
        }
        else
        {
            string str=arr[digits[i]-'0'];
            for(int j=0;j<str.length();j++)
                getcombo(arr,digits,i+1,s+str[j]);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0)return sol;
        else
        {
            string arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            getcombo(arr,digits,0,"");
            return sol;
        }
        
    }
};
// class Solution {
//       vector<string>c;
// public:
    
//     void getcombo(vector<pair<int,string>> combo,string digit,int i,string s)
//     {
//         if(i==digit.length())
//         {
//             c.push_back(s);
//             return;
//         }
//         else
//         {
//            string str=combo[(digit[i]-'0')-2].second;
//             for(int j=0;j<str.length();j++)
//             getcombo(combo,digit,i+1,s+str[j]);
//         }
//     }
//     vector<string> letterCombinations(string digits) {
//          vector<pair<int,string>>combo;
//         if(digits.length()==0)return c;
//         int x=97;
//         for(int i=2;i<=9;i++)
//         {
//             int m;
//             string str="";
//             if(i==7||i==9)
//             {
//                 m=4;
//                 while(m--){
//                 str+=(char)x;
//                      x++;}
//                 combo.push_back({i,str}); }
//             else {
//                 m=3;
//                 while(m--){
//                     str+=(char)x;
//                     x++;}
//                  combo.push_back({i,str});} }
//         getcombo(combo,digits,0,"");
//             return c;
//     }
    
// };