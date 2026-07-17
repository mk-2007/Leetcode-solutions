class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int i = 0; i < arr.size(); i++){
            int target = 2*arr[i];
            auto it = lower_bound(arr.begin(), arr.end(), target);
            if(it != arr.end() && *it == target){
                int index = it - arr.begin();
                if(i != index) return true;
            }
        }
        return false;
    }
};