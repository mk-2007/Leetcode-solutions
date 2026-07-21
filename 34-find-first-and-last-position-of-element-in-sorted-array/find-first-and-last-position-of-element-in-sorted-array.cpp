class Solution {
public:
     vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int index1 = -1, index2 = -1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] == target){
				index1 = mid;	
			 	right = mid - 1;
			}
            else if(nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        left = 0, right = nums.size() - 1;
         while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] == target){
            	 index2 = mid;
				 left = mid + 1;
			}
            else if(nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
    return {index1, index2};
    }
};