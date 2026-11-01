class Solution {
    vector<vector<int>>results;
    vector<int>temp;
    void solve(vector<int>&comb, int index, int size, int target, int sum){
        if(sum == target){
            results.push_back(temp);
            return;
        }
        if(sum > target){
            return;
        }
        for(int i = index; i < size; i++){
            temp.push_back(comb[i]);
            solve(comb, i, size, target, sum+comb[i]);
            temp.pop_back();
        }
        return;
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates, 0, candidates.size(), target, 0);
        return results;
    }
};