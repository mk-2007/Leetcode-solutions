class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end());
            int i = 0; 
            while(i < nums.size() && k > 0 && nums[i] < 0){
                nums[i] = -nums[i];
                k--;
                i++;
            }
            int sum = 0;
            sort(nums.begin(), nums.end());
            for(int i = 0; i < nums.size(); i++) sum += nums[i];
            if(k% 2 == 0) return sum;
            else{
                int minvalue = INT_MAX;
                for(int x : nums){
                    minvalue = min(minvalue, abs(x));
                }
                return sum- 2*minvalue;
            }
    }
};