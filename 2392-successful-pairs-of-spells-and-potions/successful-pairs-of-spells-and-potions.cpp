class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> res(spells.size(),0);
        for(int i=0;i<spells.size();i++){
            int l = 0, h = potions.size()-1;
            while(l<=h){
                int mid = l+(h-l)/2;
                if(1LL*spells[i]*potions[mid]>=success){
                    h = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            if(l<potions.size()){
                res[i]+=potions.size()-l;
            }
        }
        return res;
    }
};