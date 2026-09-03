class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int odd = 0, even = 0, mino = INT_MAX, mine = INT_MAX;
        for(int i = 0; i < n ; i++){
            if(nums1[i]%2 == 0){
                even++;
                if(nums1[i] < mine) mine = nums1[i];
            }
            else {
                odd++;
                if(nums1[i] < mino) mino = nums1[i];
            }
        }
        if(even == n || odd == n) return true;
        if(mino  < mine) return true;
        return false;
    }
};