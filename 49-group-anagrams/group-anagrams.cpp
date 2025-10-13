class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(auto& str : strs){
            string key = str;
            sort(key.begin(),key.end());
            map[key].push_back(str);
        }
        vector<vector<string>> res;
        for(auto& i : map){
            res.push_back(i.second);
        }
        return res;
    }
};