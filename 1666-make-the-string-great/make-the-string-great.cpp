class Solution {
public:
    string makeGood(string s) {
        string result = "";
        for(int i = 0; i < s.size(); i++){
            if(!result.empty() && (s[i] == toupper(result.back()) || toupper(s[i]) == result.back()) && s[i] != result.back()){
                 result.pop_back();
                 continue;
            }
            result += s[i];
        }
        return result;
    }
};