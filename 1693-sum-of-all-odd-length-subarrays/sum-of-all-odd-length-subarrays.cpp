class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        long long sum = 0;
        vector<int>prefix(n);
        prefix[0] = arr[0];
        sum += prefix[0];
        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + arr[i];
            sum += arr[i];
        }
        int left = 1;
        while(left < n - 2){
            int right = left + 2;
            while(right < n){
                sum += (prefix[right] - prefix[left-1]);
                right += 2;
            }
            left++;
        }
        for(int i = 2; i < n ; i+=2){
            sum += prefix[i];
        }
        return sum;
    }
};