class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& s) {
        int n = students.size();
        int count1 = 0, count0 = 0;
        for(int i = 0; i < n; i++){
            if(students[i] == 1) count1++;
            else count0++;
        }
        for(int i = 0; i < n; i++){
            if(s[i] == 1 && count1 > 0) count1--;
            else if(s[i] == 1 && count1 == 0) break;
            if(s[i] == 0 && count0 > 0) count0--;
            else if(s[i] == 0 && count0 == 0) break;
        }
        return count1+count0;
    }
};