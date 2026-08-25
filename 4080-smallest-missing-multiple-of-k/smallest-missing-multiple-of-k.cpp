class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<bool>seen(101);
        for(int i = 0; i < nums.size() ; i++) seen[nums[i]] = true;
        int num = k;
        while(num < 101){
            if(!seen[num]) return num;
            num += k;
        }
        return num;
    }
};