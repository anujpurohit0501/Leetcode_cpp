class MedianFinder {
public:
using d=double;
priority_queue<d>maxheap;
priority_queue<d>minheap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxheap.size()==0){
            maxheap.push(num);
        }
        else if(num>maxheap.top()){
            minheap.push(-num);
        }else maxheap.push(num);
        if(minheap.size()>maxheap.size()){
            int k=-minheap.top();
            minheap.pop();
            maxheap.push(k);
        }else if(maxheap.size()>minheap.size()+1){
            int k=maxheap.top();
            maxheap.pop();
            minheap.push(-k);
        }
    }
    
    double findMedian() {
        if(maxheap.size()==minheap.size()){
            return (maxheap.top()-minheap.top())/2.0;
        }
        return maxheap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */