class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        
        if(strs.size() < 0)
            return ans;
        
        
        unordered_map<string, vector<string>> mp;
        
        for(auto str:strs) {
            string temp = str;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(str);
        }
        
        
        for(auto it : mp) {
            ans.push_back(it.second);
        }
        
        return ans;
        
        
        
    }
};