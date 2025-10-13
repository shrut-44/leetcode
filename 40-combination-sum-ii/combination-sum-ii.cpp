class Solution {
public:
    void combinationSum2Helper(vector<int> candidates, int target, vector<vector<int>>& res, vector<int> store, int ind){
        if(target==0){
            res.push_back(store);
            return;
        }
        for(int i=ind;i<candidates.size();i++){
            if(i>ind && candidates[i]==candidates[i-1]) continue;
            if(target<candidates[i]){
                break;
            }
            store.push_back(candidates[i]);
            combinationSum2Helper(candidates,target-candidates[i],res,store,i+1);
            store.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> store;
        sort(candidates.begin(),candidates.end());
        combinationSum2Helper(candidates,target,res,store,0);
        return res;
    }
};