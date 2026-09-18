class Solution {
public:
    string largestNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end(), [](int& a, int& b) -> bool{
        string astr = to_string(a);
        string bstr = to_string(b);
        return astr+bstr > bstr+astr;
       });
       string res = "";
       for(int i=0;i<nums.size();i++){
        res+=to_string(nums[i]);
       }
       if(res[0]=='0') res="0";
       return res;
    }
};