class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k == 1) return nums;
	deque<int>dq;
	dq.push_back(0);
	vector<int>result;
	for(int i = 1; i < nums.size(); i++){
		while (!dq.empty() && dq.front() < i - k + 1) dq.pop_front();
		while(!dq.empty() && nums[i] >= nums[dq.back()]) dq.pop_back();
		dq.push_back(i);
		if(i >= k-1 && !dq.empty()){
			result.push_back(nums[dq.front()]);
		}
	}
	return result;
    }
};