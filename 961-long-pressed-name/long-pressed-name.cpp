class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int index = 0, current = 0; 
        while(index < name.size() && current < typed.size()){
            if(name[index] == typed[current]){
                index++, current++;
            }
            else if(current > 0 && typed[current] == typed[current-1]) current++;
            else return false;
            }
        if (index != name.size()) return false;
        while (current < typed.size()) {
            if (typed[current] != typed[current - 1]) return false;
            current++;
        }
            return true;
    }
};