//implementing queue using single stack
class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int>s;
    void push(int x) {
        if(s.empty())
        s.push(x);

        else{
            int data=s.top();
            s.pop();
            push(x);
            s.push(data);
        }
    }
    
    int pop() {
        int data= s.top();
        s.pop();
        return data;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        if(s.empty())
        return true;
        else
        return false;
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
