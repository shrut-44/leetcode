class Solution {
public:
    void combinationSumHelper(vector<int> candidates, int target, int sum, vector<vector<int>>& res, int i,vector<int> store){
        if(sum>target) return;
        if(sum==target){
            res.push_back(store);
            return;
        }
        if(i==candidates.size()) return;
        store.push_back(candidates[i]);
        combinationSumHelper(candidates,target,sum+candidates[i],res,i,store);
        store.pop_back();
        combinationSumHelper(candidates,target,sum,res,i+1,store);

        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        combinationSumHelper(candidates,target,0,res,0,{});
        return res;
    }
};