class Solution {
    vector<vector<int>>result;
    vector<int>temp;
    void solve(vector<int>nums, int index, int target, int sum){
        if(sum == target){
            result.push_back(temp);
            return;
        }
        if(sum > target) return;
        for(int i = index; i < nums.size(); i++){
            if(i > index && nums[i] == nums[i-1]) continue;
            temp.push_back(nums[i]);
            solve(nums,i+1,target, sum+nums[i]);
            temp.pop_back();
            }
        return;
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        solve(candidates, 0, target, 0);
        return result;
    }
};