class MyStack {
public:
    queue<int> q ;
    queue<int> tq ;
    MyStack() {
        
    }
    
    void push(int x) {
        tq.push(x); 
        while(!q.empty()){
            tq.push(q.front());
            q.pop();
        }
        swap(q,tq);
    }
    
    int pop() {
        int ans = q.front();
        q.pop();
        return ans ;
    }
    
    int top() {
        return q.front() ;
        
    }
    
    bool empty() {
        if(q.empty()) return true ;
        else return false ;
        
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