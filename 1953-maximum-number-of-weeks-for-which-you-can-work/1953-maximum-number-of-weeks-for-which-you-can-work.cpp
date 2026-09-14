class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long long s=accumulate(milestones.begin(),milestones.end(),0LL);
        long long m=*max_element(milestones.begin(),milestones.end());
        long long x=s-m;
        
        if(m>x){return 2*x+1;}
        return s;
    }
};