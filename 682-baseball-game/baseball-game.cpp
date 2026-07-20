class Solution {
public:
    int calPoints(vector<string>& operations) {
        long long result = 0;
        stack<int>st;
        for(string operation : operations){
            if(operation == "D"){
                if(!st.empty()) {
                    int top = st.top();
                    result += 2*(st.top());
                    st.push(2*(st.top()));
                }
            }
            else if(operation == "C"){
                if(!st.empty()){
                    result -= st.top();
                    st.pop();
                }
            }
            else if(operation == "+"){
                if(!st.empty()){
                    int top = st.top();
                    st.pop();
                    int temp = (top + st.top());
                    result += temp;
                    st.push(top);
                    st.push(temp);
                }
            }
            else{
                result += stoi(operation);
                st.push(stoi(operation));
            }
        }
        return result;
    }
};