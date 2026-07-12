class RecentCounter {
public:
        queue<int>st;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        st.push(t); 
        while(st.front()< t-3000){
            st.pop() ;
        }
        return st.size() ;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */