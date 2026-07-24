class MyQueue {
public:
    stack<int>st;
    stack<int>s;
    MyQueue() {
    }
    
    void push(int x) {
        st.push(x);        
    }
    
    int pop() {
        while(!st.empty()){
            int top = st.top();
            st.pop();
            s.push(top);
        }
        int num = s.top();
        s.pop();
        while(!s.empty()){
            int top = s.top();
            s.pop();
            st.push(top);
        }
        return num;
    }
    
    int peek() {
        while(!st.empty()){
            int top = st.top();
            st.pop();
            s.push(top);
        }
        int num = s.top();
        while(!s.empty()){
            int top = s.top();
            s.pop();
            st.push(top);
        }
        return num;
    }

    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */