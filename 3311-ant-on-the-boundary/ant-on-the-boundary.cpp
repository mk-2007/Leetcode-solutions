class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n = nums.size();
        long long sum = nums[0];
        int count = (sum == 0);
        for(int i = 1 ; i < n; i++){
            sum += nums[i];
            if(sum == 0) count++;
        }
        return count;
    }
};