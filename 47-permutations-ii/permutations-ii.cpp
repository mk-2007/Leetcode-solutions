class Solution {
    vector<vector<int>>temp;
    void solve(vector<int>nums, int index, int size){
        if(index == size){
            temp.push_back(nums);
            return;
        }
        for(int i = index; i < size; i++){
                bool found = false;
                for(int j = index; j < i; j++){
                    if(nums[j] == nums[i]){
                        found = true;
                    }
                }
                if(found) continue;
                swap(nums[i], nums[index]);
                solve(nums, index+1, size);
                swap(nums[i], nums[index]);
        }
        return;
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        solve(nums, 0, nums.size());
        return temp;
    }
};