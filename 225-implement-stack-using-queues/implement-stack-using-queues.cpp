class MyStack {
public:
    queue<int>q;
    MyStack() {
    }
    void push(int x) {
        q.push(x);
    }
    int pop() {
        int x; 
        int i = 1;
        while(i < q.size()){
            x = q.front();
            q.pop();
            q.push(x);
            i++;
        }
         x = q.front();
         q.pop();
         return x;
    }
    int top() {
        int x; 
        int i = 0;
        while(i < q.size()){
            x = q.front();
            q.pop();
            q.push(x);
            i++;
        }
        return x;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */