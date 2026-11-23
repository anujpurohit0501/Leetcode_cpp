class ProductOfNumbers {
public:
using ll=long long;
vector<ll>pr;
multiset<int>m;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(pr.size()==0){pr.push_back(num);
        if(num==0)m.insert(0);
        return ;}
        else{
            if(num==0){
                m.insert(pr.size());
                pr.push_back(0);
            }
            else if(pr.back()!=0)pr.push_back(pr.back()*num);
            else if(pr.back()==0){
                pr.push_back(num);
            }
        }
    }
    
    int getProduct(int k) {
        int n=pr.size();
        int l=n-k;
        auto lw=m.lower_bound(l);
        if(lw!=m.end()&&*lw<n)return 0;
        if(l==0||pr[l-1]==0)return pr[n-1];
        else return pr[n-1]/pr[l-1];

    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */