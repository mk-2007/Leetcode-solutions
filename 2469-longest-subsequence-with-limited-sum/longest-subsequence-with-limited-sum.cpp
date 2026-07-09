class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();
        sort(nums.begin(), nums.end());
        vector<int>result(m,0);
        for(int i = 0; i < m; i++){
            int sum = 0; 
            int right = 0, left = 0;
            while(right < n && left < n){
                sum += nums[right];
                if(sum > queries[i]){
                    sum -= nums[left];
                    left++;
                }
                right++;
                result[i] = max(right-left, result[i]);
            }
        }
        return result;   
    }
};