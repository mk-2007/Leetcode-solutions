class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int diff = abs(arr[1] - arr[0]);
        for(int i = 2; i < arr.size(); i++){
            if(abs(arr[i] - arr[i-1]) < diff) diff = abs(arr[i] - arr[i-1]);
        }
        vector<vector<int>>result;
        for(int i = 1; i < arr.size(); i++){
            if(abs(arr[i] - arr[i-1]) == diff) result.push_back({arr[i-1], arr[i]});
        }
        return result;
    }
};