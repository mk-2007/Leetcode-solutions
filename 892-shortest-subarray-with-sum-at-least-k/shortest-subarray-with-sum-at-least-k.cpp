class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size(), length = INT_MAX;
        deque<int>dq;
        vector<long long>prefix(n+1, 0);
        for(int i = 0; i < n ; i++) prefix[i+1] = prefix[i] + nums[i];
        for(int i = 0; i <= n; i++){
        	while(!dq.empty() && prefix[i] - prefix[dq.front()] >= k) {	
					length = min(length, i - dq.front());
					dq.pop_front();
				}
        	while(!dq.empty() && prefix[i] <= prefix[dq.back()]) dq.pop_back();
        	dq.push_back(i);
		}
		return (length > n)?  -1 : length;
    }
};