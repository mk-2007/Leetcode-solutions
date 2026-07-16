class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>prefixGcd(nums.size());
        int mxi = 0;
        for(int i = 0; i < nums.size() ; i++){
                mxi = max(mxi, nums[i]);
                prefixGcd[i] = gcd(mxi, nums[i]);
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        int left = 0, right = prefixGcd.size() - 1;
        long long  sum = 0LL;
        while(left <= right && left != right){
            sum += gcd(prefixGcd[left], prefixGcd[right]);
            left++, right--;
        }
        return sum;
    }
};