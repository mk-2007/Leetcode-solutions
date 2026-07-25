class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        int size = s.size();
        sort(s.begin(), s.end());
        return (s[size-1] - '0')*(s[size-2] - '0');
    }
};