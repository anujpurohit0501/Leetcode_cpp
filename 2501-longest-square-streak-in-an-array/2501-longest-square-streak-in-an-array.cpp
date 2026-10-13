class Solution {
public:

    int longestSquareStreak(vector<int>& nums) {
        set<int>st{nums.begin(),nums.end()};
        bool flag=true;
        for(int i:nums){
            int o=sqrt(i);
            if(o*o==i&&st.contains(o))flag=false;
        }
        if(flag==true)return -1;
        int a=-1;
        for(int i:nums){
            int b=0;
            while(i>1&&st.contains(i)){
                b++;
                double k=pow(i,0.5);
                if(ceil(k)==k){
                    i=k;
                }else break;
                
                
            }a=max(a,b);
            
        }int n=nums.size();
        return min(n,a);
    }
};