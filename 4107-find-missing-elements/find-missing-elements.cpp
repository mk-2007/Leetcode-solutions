class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        for(int i = mn; i <= mx; i++){
            for(int j = 0; j < n; j++){
                auto it = find(nums.begin(), nums.end(), i);
                if(it == nums.end()){
                    result.push_back(i);
                    break;
                }
            }
        }
        return result;
    }
};