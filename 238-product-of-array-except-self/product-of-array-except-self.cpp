class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n), right(n), result(n);
        left[1] = nums[0], right[n-2] = nums[n-1];
        for(int i = 2 ; i < n ; i++) left[i] = left[i-1]*nums[i-1];
        for(int i = n-3; i >= 0; i--) right[i] = right[i+1]*nums[i+1];
        for(int i = 0 ; i < n; i++){
            if(i == 0) result[i] = right[0];
            else if(i == n-1) result[i] = left[n-1];
            else result[i] = left[i]*right[i];
        }
        return result;
    }
};