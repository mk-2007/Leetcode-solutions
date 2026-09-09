class Solution {
public:
    long long countCommas(long long n) {
        long long current = 1000;
        long long result = 0;
        while(current <= n){
            result += (n-current+1);
            current *= 1000;
        }
        return result;
    }
};