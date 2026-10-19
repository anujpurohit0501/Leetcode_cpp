class Solution {
public:
    int earliestFinishTime(vector<int>& p, vector<int>& q, vector<int>& r, vector<int>& s) {
        //best of land then choose from water
        int k=0;
        int mx=1e9;
        for(int i=0;i<p.size();i++){
            if(mx>p[i]+q[i]){
                k=i;
                mx=p[i]+q[i];
            }
        }
        int a=1e9;
        for(int i=0;i<r.size();i++){
            int e=0;
            if(p[k]+q[k]>r[i]){
                e=p[k]+q[k]+s[i];
            }else e=r[i]+s[i];
            a=min(a,e);
        }
        //best of water then choose from land
        k=0;
        mx=1e9;
        for(int i=0;i<r.size();i++){
            if(mx>r[i]+s[i]){
                k=i;
                mx=r[i]+s[i];
            }
        }
        
        for(int i=0;i<p.size();i++){
            int e=0;
            if(r[k]+s[k]>p[i]){
                e=r[k]+s[k]+q[i];
            }else e=p[i]+q[i];
            a=min(a,e);
        }return a;
    }
};