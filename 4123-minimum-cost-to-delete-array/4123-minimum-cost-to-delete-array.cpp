class Solution {
public:
using ll=long long ;
vector<int>nums;
ll f(){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=1;i<nums.size()-1;i++)pq.push(nums[i]);
    ll a=0;
    while(pq.size()>1){
        int k=pq.top();
        pq.pop();
        int t=pq.top();
        pq.pop();
        if(k+t<0)a+=t+k;
    }
    return a;
}
    long long minCost(vector<int>& nums) {
        ll a=nums.front()+nums.back();
        this->nums=nums;
        a+=f();
        return a;
    }
};