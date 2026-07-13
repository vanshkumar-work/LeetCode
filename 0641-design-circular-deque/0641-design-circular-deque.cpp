class MyCircularDeque {
public:
int front = 0 ;
int rear = -1;
int capacity ;
int size = 0; 
vector<int>q ;
    MyCircularDeque(int k) {
        capacity= k ;
        q.resize(k);
    }
    
    bool insertFront(int value) {
        if(size==capacity) return false ;
        if(size==0){
             rear = 0 ;
             front = 0 ;
             q[0] = value ;
             size++;
             return true ;
        }
        else{
            front = (front-1+capacity)%capacity ;
            q[front] = value ;
            size++ ;
            return true ;
        }
        
    }
    
    bool insertLast(int value) {
        if(size==capacity) return false ;
        if(size==0){
            rear = 0 ;
             front = 0 ;
             q[0] = value ;
             size++ ;
             return true ;
        }
        else{
            rear = (rear+1)%capacity  ;
            q[rear] = value ;
            size++ ;
            return true ;
        }
    }
    
    bool deleteFront() {
        if(size==0) return false ;
        front = (front+1)%capacity ;
        size-- ;
        return true; 
    }
    
    bool deleteLast() {
        if(size==0) return false ;
        rear = (rear-1+capacity)%capacity ;
        size-- ;
        return true ;
    }
    
    int getFront() {
        if(size==0) return -1 ;
        return q[front] ;
        
    }
    
    int getRear() {
        if(size==0) return -1 ;
        return q[rear] ;
    }
    
    bool isEmpty() {
        if(size==0) return true ;
        else return false ;
    }
    
    bool isFull() {
        if(size==capacity) return true;
        else return false ;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */