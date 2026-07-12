class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int even = 0, odd = 1;
        while(even < n && odd < n){
		if(nums[even] % 2 == 0) even  += 2;
		else if(nums[odd] % 2 == 1) odd += 2;
		else {
            if(odd < n && even < n){
                swap(nums[odd], nums[even]);
			    odd+=2, even+=2;
	    	}
            }
        }
        return nums;
    }
};