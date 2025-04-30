class MedianFinder {
public:
priority_queue<int>left_heap;
priority_queue<int,vector<int>,greater<int>>right_heap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
      if(left_heap.empty() || num<left_heap.top()){
        left_heap.push(num);
      }else{
        right_heap.push(num);
      }
      if(left_heap.size()<right_heap.size())  {
        left_heap.push(right_heap.top());
        right_heap.pop();
      }else if(abs((int)left_heap.size()-(int)right_heap.size())>1){
        right_heap.push(left_heap.top());
        left_heap.pop();

      }
    }
    
    double findMedian() {
       if(left_heap.size()==right_heap.size()) {
        return (double)(left_heap.top()+right_heap.top())/2;
       }else{
        return left_heap.top();
       }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */