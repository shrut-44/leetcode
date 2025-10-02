class Solution {
public:
    void subsequence(vector<int> nums,  vector<vector<int>>& res, vector<int> ele, int idx){
        if(idx==nums.size()){
            res.push_back(ele);
            return;
        }
        ele.push_back(nums[idx]);
        subsequence(nums,res,ele,idx+1);
        ele.pop_back();
        subsequence(nums,res,ele,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        subsequence(nums,res,{},0);
        return res;
    }
};