class ProductOfNumbers {
public:
using ll=long long;
vector<ll>pr;
int last=-1;

    ProductOfNumbers() {
        
    }
    
    void add(int num) {
            if(pr.size()==0){pr.push_back(num);if(num==0)last=0;}
            else if(num==0){pr.push_back(0);
            last=pr.size()-1;}
            else if(pr.back()==0)pr.push_back(num);
            else pr.push_back(pr.back()*num);

        }
    
    int getProduct(int k) {
        int n=pr.size();
        if(last>=n-k)return 0;
        if(n-k==0||pr[n-k-1]==0)return pr.back();
        return pr.back()/pr[n-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */