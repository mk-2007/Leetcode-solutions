class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mn = 0, mx = 0, n = nums.size();
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < nums[mn]) mn = i;
            if(nums[i] > nums[mx]) mx = i;
        }
        int left = min(mn, mx);
        int right = max(mn , mx);
        return min(left+1+n-right, min(right + 1, n - left));
      }
};