class MyQueue {
public:
stack <int> s ;
stack <int> ts ;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s.empty()){
            ts.push(s.top());
            s.pop();
        }
        s.push(x);
        while(!ts.empty()){
            s.push(ts.top());
            ts.pop();
        }
    }
    
    int pop() {
        int x = s.top() ;
        s.pop() ;
        return x ;
        
    }
    
    int peek() {
        return s.top();
        
    }
    
    bool empty() {
        if(s.empty()) return true ;
        else return false ; 
        
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