class Solution {
public:
using d =double;
using ll=long long;
void b(multiset<int>&l,multiset<int>&r){
    if(l.size()>r.size()+1){
        int k=*l.rbegin();
        l.erase(l.find(k));
        r.insert(k);
    }
    else if(r.size()>l.size()){
        int k=*r.begin();
        r.erase(r.find(k));
        l.insert(k);
    }
    if(l.size()&&r.size()&&*l.rbegin()>*r.begin()){
        int k=*l.rbegin();
        int t=*r.begin();
        r.erase(r.find(*r.begin()));
        l.erase(l.find(*l.rbegin()));
        r.insert(k);
        l.insert(t);
    }
}
void pb(multiset<int>&l,multiset<int>&r,vector<d>&a){
    ll rr=(ll)*l.rbegin()+*r.begin();
    if(l.size()==r.size())a.push_back(rr/2.0);
    else a.push_back(*l.rbegin());
}
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        multiset<int>l,r;
        for(int i=0;i<k;i++){
            l.insert(nums[i]);
            b(l,r);
        }vector<d>a;
        pb(l,r,a);
        for(int i=k;i<nums.size();i++){
            int j=i-k;
            if(*l.rbegin()<nums[j]){
                r.erase(r.find(nums[j]));
            }else {
            l.erase(l.find(nums[j]));
            }
            b(l,r);
            l.insert(nums[i]);
            b(l,r);
            pb(l,r,a);
        }
        return a;
    }
};