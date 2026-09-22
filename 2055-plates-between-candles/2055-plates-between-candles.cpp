class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& q) {
        vector<int>arr;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c=='|')arr.push_back(i);
        }
        int n=s.size();
        vector<int>pre(n);
        pre[0]=(s[0]=='*')?1:0;
        for(int i=1;i<n;i++){
            if(s[i]=='|')pre[i]=pre[i-1];
            else {
                pre[i]+=pre[i-1]+1;
            }
        }
        vector<int>ans;
        for(auto i:q){
            int one=i[0],two=i[1];
            int p=lower_bound(arr.begin(),arr.end(),one)-arr.begin();
            int q=lower_bound(arr.begin(),arr.end(),two)-arr.begin();
            if(q==arr.size()||arr[q]!=two)q--;
            if(p>q) {
                ans.push_back(0);
                continue;
            }
            int k=pre[arr[q]]-pre[arr[p]];
            ans.push_back(k);
        }return ans;
    }
};