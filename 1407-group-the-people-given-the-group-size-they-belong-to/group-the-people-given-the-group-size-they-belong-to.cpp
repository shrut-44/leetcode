class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<groupSizes.size();i++){
            mp[groupSizes[i]].push_back(i);
        }
        vector<vector<int>> res;
        for(auto& it : mp){
            int j = 0;
            while(j<it.second.size()){
                vector<int> temp;
                int i=0;
                while(j<it.second.size() && i<it.first){
                    temp.push_back(it.second[j]);
                    i++;
                    j++;
                }
                res.push_back(temp);
            }
        }
        return res;  
    }
};