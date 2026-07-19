class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = 0, pos = 0;
        int left = 0, right = nums.size() -1;
        while(left <= right){
            if(nums[left] < 0){
                neg++;
                left++;
            }
            else if(nums[right] > 0){
                pos++;
                right--;
            }
            else if(nums[left] == 0 && nums[right] == 0) break;
        }
        return max(pos, neg);
    }
};