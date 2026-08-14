class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            vector<int>arr(26,0);
            for(int j=i;j<s.size();j++){
                int p=s[j]-'a';
                arr[p]++;
                bool check=false;
                for(int i:arr)if(i>2)check=true;
                if(check==false){
                    int sum=accumulate(arr.begin(),arr.end(),0);
                    ans=max(sum,ans);
                }
            }
        }
        return ans;
    }
};