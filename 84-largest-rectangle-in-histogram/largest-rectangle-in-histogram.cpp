class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         int Area = INT_MIN;
		int n = heights.size();
		vector<int>previoussmaller(n, -1);
		vector<int>nextsmaller(n,n);
		stack<int>st;
		for(int i = 0; i < n; i++){
			while(!st.empty() && heights[st.top()] >= heights[i]) st.pop();
			if(!st.empty()) previoussmaller[i] = st.top();
			st.push(i);
		}
		stack<int>s;
		for(int i = n - 1; i >= 0; i--){
			while(!s.empty() && heights[s.top()] >= heights[i]) s.pop();
			if(!s.empty()) nextsmaller[i] = s.top();
			s.push(i);
		}
		for(int i = 0; i < n ; i++){
			int width = nextsmaller[i] - previoussmaller[i] - 1;
			Area = max(Area, heights[i]*width);
		}
		return Area;
    }
};