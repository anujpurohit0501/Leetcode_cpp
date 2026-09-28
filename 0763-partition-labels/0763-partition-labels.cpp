class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>a(26);
        for(char &c:s){a[c-'a']++;}
        vector<int>ans;
        vector<int>b(26);
        for(int j=0;j<s.size();j++){
            b[s[j]-'a']++;
            bool flag=false;
            for(int k=0;k<b.size();k++){
                if(b[k]==0)continue;
                else if(b[k]!=a[k])flag=true;
            }
                if(flag==false){
                    ans.push_back(j);
                }
        }
        
        int g=0;
        for(int i=0;i<ans.size();i++){
            ans[i]-=g;
            g+=ans[i];
        }ans[0]++;
        return ans;

    }
};