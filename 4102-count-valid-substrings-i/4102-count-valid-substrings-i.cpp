class Solution {
public:
using ll=long long;
    long long countValidSubstrings(string s) {
        ll a=0;
        int n=s.size();
        vector<int>oo;
        for(int i=0;i<n;i++){
            if(i+2<n&&s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c')
                oo.push_back(i);
        
        }
        for(int i=0;i<s.size();i++){
            int k=lower_bound(oo.begin(),oo.end(),i)-oo.begin();

            if(k==oo.size())a+=n-i;
            else a+=oo[k]-i+2;
        }  return a; 

 }

};