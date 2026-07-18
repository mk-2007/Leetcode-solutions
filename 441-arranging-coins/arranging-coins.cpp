class Solution {
public:
    int arrangeCoins(int n) {
        int i = 1;
        long long maxi = 1LL;
        while(true){
            long long temp = 1LL*i*(i+1)/2;
            if(temp <= n){
                maxi = max(maxi, temp);
                i++;
            }
            else break;
        }
        return i-1;   
    }
};