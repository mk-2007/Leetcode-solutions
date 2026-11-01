class Solution {
    vector<vector<int>>temp;
    void solve(vector<int>nums, int index, int size){
        if(index == size){
            temp.push_back(nums);
            return;
        }
        for(int i = index; i < size; i++){
            swap(nums[i], nums[index]);
            solve(nums, index+1, size);
            swap(nums[i], nums[index]);
        }
        return;
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums, 0, nums.size());
        return temp;
    }
};