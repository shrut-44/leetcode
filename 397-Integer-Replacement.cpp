class Solution {
public:
    int integerReplacement(int n) {
        int cnt = 0;
        long long n_temp = n;
        while(n_temp!=1){
            if(n_temp==3){
                return cnt+2;
            }
            if(n_temp%2==0) n_temp/=2;
            else{
                if(((n_temp+1)/2)%2==0){
                    n_temp+=1;
                }else{
                    n_temp-=1;
                }
            }
            cnt++;
        }
        return cnt;
    }
};