class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        queue<int>q,q2;
        for(int i = 0; i < students.size(); i++){
            q.push(students[i]);
            q2.push(sandwiches[i]);
        }
        int count = 0, k = 0;
        while(true){
            if(q.empty() || q2.empty()) break;
            if(q.front() == q2.front()){
                q.pop(), q2.pop();
                count++;
                k = 0;
            }
            else{
                int front = q.front();
                q.pop(), q.push(front);
                k++;
                if(k == q.size()) break;
            }
        }
        return q.size();
    }
};