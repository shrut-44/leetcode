class Solution {
public:
    int atMost(vector<int>& nums, int k){
        unordered_map<int,int> mp;
        int i = 0;
        int res = 0;
        for(int j=0;j<nums.size();j++){
            mp[nums[j]]=j;
            if(mp.size()>k){
                int minIdxKey = -1;
                for(auto& it : mp){
                    if(minIdxKey==-1){
                        minIdxKey = it.first;
                        continue;
                    }
                    if(mp[minIdxKey]>it.second){
                        minIdxKey = it.first;
                    }
                }
                i = mp[minIdxKey]+1;\
                mp.erase(minIdxKey);
            }
            res+=j-i+1;
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k) - atMost(nums,k-1);
    }
};