class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd, even;
        for(int i = 0; i < nums.size(); i++){
            if(i % 2 == 0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());
        vector<int>result(nums.size());
        int index = 0, i = 0, j = 0;
        while(index < nums.size()){
            if(index % 2 == 0) {
                result[index] = even[i];
                i++;
            }
            else{
                result[index] = odd[j];
                j++;
            }
            index++;
        }
        return result;
    }
};