class Solution {
public:
    int getsum(int index, string s){
        int sum = 0;
        for(int j = 0 ; j<=index; j++) {
            sum += (s[j] - 'a' + 1);
        }
        return sum;
    }
    bool scoreBalance(string s) {
        int n = s.size(), sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum += (s[i] - 'a' + 1);
        }
        for(int i = 0; i < n; i++){
           if(getsum(i, s) == (getsum(n-1, s) - getsum(i , s))) return true;
        }
        return false;
    }
};