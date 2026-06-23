class Solution {
public:
    int trap(vector<int>& height) {
        int t=0,k=0;
        int n=height.size();
        vector<int>l(n),r(n);
        for(int i=0;i<n;i++){
            t=max(t,height[i]);
            l[i]=t;
        }
        for(int j=n-1;j>=0;j--){
            k=max(k,height[j]);
            r[j]=k;
        }
        int w=0;
        for(int i=0;i<n;i++){
            int cc=min(l[i],r[i]);
            int uu=height[i];
            w+=cc-uu;
        }return w;
    }
};