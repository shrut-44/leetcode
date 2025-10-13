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
    vector<string> removeAnagrams(vector<string>& words) {
        string start = words[0];
        vector<string> res;
        res.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            if(!checkAna(start,words[i])){
                res.push_back(words[i]);
                start = words[i];
            }
        }
        return res;
    }
};