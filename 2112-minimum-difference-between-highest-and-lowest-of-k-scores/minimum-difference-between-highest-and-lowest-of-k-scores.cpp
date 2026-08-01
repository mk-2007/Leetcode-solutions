class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int answer = INT_MAX;
        sort(nums.begin(), nums.end());
        int left = 0, right = 0;
        if(nums.size() == 1) return 0;
        while(right < nums.size()){
            right++;
            while(right - left + 1 > k) left++;
            if(right - left + 1 == k && right < nums.size()) answer = min(answer, nums[right]- nums[left]);
        }
        return answer;
    }
};