class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int minSub = INT_MAX;
        for(int i = 1;i<arr.size();i++){
            minSub = min(minSub,abs(arr[i]-arr[i-1]));
        }
        vector<vector<int>> res;
        for(int i = 1;i<arr.size();i++){
            if(abs(arr[i]-arr[i-1]==minSub)) res.push_back(vector<int>{arr[i-1],arr[i]});
        }
        return res;
    }
};