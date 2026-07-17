class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        string temp1 = s.substr(0,1), temp2 = s.substr(1,1);
        temp1 += s[3], temp2 += s[2];
        return stoi(temp1) + stoi(temp2);
    }
};