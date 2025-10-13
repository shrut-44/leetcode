class Solution {
public:
    bool checkAna(string word1, string word2){
        if(word1.size()!=word2.size()){
            return false;
        }
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());
        return word1==word2;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        for(int i=0;i<strs.size();i++){
            int j=0;
            bool flag = false;
            while(j<res.size() && flag==false){
                if(checkAna(res[j][0],strs[i])){
                    res[j].push_back(strs[i]);
                    flag = true;
                }
                j++;
            }
            if(!flag){
                res.push_back({strs[i]});
            }
        }
        return res;
    }
};