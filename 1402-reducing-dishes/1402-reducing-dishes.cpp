class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end());
        int ans=0;
        for(int i=0;i<s.size();i++){
            int k=1;
            int a=0;
            for(int j=i;j<s.size();j++,k++){
                a+=(k*s[j]);
            }ans=max(a,ans);
        }return ans;
    }
};