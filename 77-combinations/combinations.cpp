class Solution {
    vector<vector<int>>result;
    vector<int>temp;
    void solve(int index, int n, int k){
        if(temp.size() == k){
            result.push_back(temp);
            return;
        }
        for(int i = index; i < n; i++){
            temp.push_back(i+1);
            solve(i+1, n, k);
            temp.pop_back();
        }
        return;
    }
public:
    vector<vector<int>> combine(int n, int k) {
            solve(0, n, k);
            return result;
        }
};