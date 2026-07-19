class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int k) {
        int count = 0, n = flowerbed.size();
        if(n == 1 && flowerbed[0] == 0)return true;
        if(n == 1 && flowerbed[0] == 1 && k > 0) return false;
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
            flowerbed[0] = 1;
            count++;
        }
        if(flowerbed[n-1] == 0 && flowerbed[n-2] == 0){
            flowerbed[n-1] = 1;
            count++;
        }
        for(int i = 1; i < n - 1; i++){
            if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && 
                flowerbed[i+1] == 0){
                    flowerbed[i] = 1;
                    count++;
                }
        }
        return count >= k;
    }
};