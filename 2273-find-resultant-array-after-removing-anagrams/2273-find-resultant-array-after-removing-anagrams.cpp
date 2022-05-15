class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>sol;
        sol.push_back(words[0]);
        for(int i=1;i<words.size();i++)
        {
            string word=words[i];
            string word1=sol.back();
            sort(word.begin(),word.end());
            sort(word1.begin(),word1.end());
            if(word!=word1)
            {
             sol.push_back(words[i]);
            }
                
        }
        return sol;
        
    }
};