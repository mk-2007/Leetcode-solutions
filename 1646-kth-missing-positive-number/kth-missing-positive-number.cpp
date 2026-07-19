class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
         int times = 0;
        int value = 1;
        int index = 0;
        while(index < arr.size()){
            while(value < arr[index]){
            	times++;
        	if(times == k) return value;
            	value++;
			}
			value++, index++;
    }
    if(times < k) value += (k - times - 1);
    return value;
    }
};