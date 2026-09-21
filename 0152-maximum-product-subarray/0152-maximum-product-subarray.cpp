class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=1,b=1,mx=-1e9;
        for(int i:nums){
            //either * this too in existing or start from here 
            int olda=a;
            int oldb=b;
            a=max({i,olda*i,oldb*i});
            b=min({i,oldb*i,olda*i});
            
            mx=max({mx,a,b});
        }return mx;
    }
};
