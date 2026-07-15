class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0 ; i < image.size(); i++){
            int left = 0, right = image[i].size() - 1;
            while(left <= right){
                swap(image[i][left], image[i][right]);
                if(image[i][left] == 0) image[i][left] =1;
                else image[i][left] = 0;
                if(left != right){
                    if(image[i][right] == 0) image[i][right] = 1;
                    else image[i][right] = 0;
                }
                left++, right--;
            }
        }
        return image;
    }
};