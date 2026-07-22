class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
		const int mod = 1e9 + 7;
		long long answer = 0LL;
        int n = arr.size();
        vector<int>next(n, n), previous(n,-1);
        stack<int>st;
        for(int i = 0 ; i < n; i++){
        	while(!st.empty() && arr[st.top()] > arr[i]) st.pop();
        	if(!st.empty()) previous[i] = st.top();
        	st.push(i);
		}
		while(!st.empty()) st.pop();
		for(int i = n - 1; i >= 0; i--){
			while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
			if(!st.empty()) next[i] = st.top();
			st.push(i);
		}
		for(int i = 0; i < n; i++){
			int left = i - previous[i];
			int right = next[i] - i;
			answer += 1LL*left*right*arr[i];
		}
		return answer%mod;
    }
};