class Solution {
public:
    void CombinationSumHelper(vector<int>& candidates, int target, int pos,
                              vector<int>& curr, vector<vector<int>>& res) {
        if (target == 0) {
            res.push_back(curr);
            return;
        }
        if (pos == candidates.size()) {
            return;
        }
        if (target - candidates[pos] >= 0) {
            curr.push_back(candidates[pos]);
            CombinationSumHelper(candidates, target - candidates[pos], pos,
                                 curr, res);
            curr.pop_back();
        }
        CombinationSumHelper(candidates, target, pos + 1, curr, res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        CombinationSumHelper(candidates, target, 0, curr, res);
        return res;
    }
};