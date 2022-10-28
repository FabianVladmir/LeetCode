class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        
        if(strs.size() < 0)
            return ans;
        
        
        unordered_map<string, vector<string>> m;
        
        for(auto &it:strs){
            int freq[26] = {0};    
            for(auto i : it)            
                freq[i-'a']++;
            
            string currStr;
        
            for(int i = 0; i<26; i++) {

                if(freq[i] > 0) {
                    currStr += string(freq[i], i+'a');
                }
            }
            
            m[currStr].push_back(it);
            
            //found
            // if(m.find(currStr) != m.end()){
            //     m[currStr].push_back(it);
            // }
            // //not found
            // else{
            //     m[currStr] = {it};
            // }
            
        }
        
        for(auto &it : m) {
            ans.push_back(std::move(it.second));
        }
        
        return ans;
        
        
        
        
    }
};