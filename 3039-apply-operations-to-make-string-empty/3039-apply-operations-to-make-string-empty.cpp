class Solution {
public:
    string lastNonEmptyString(string s) {
        vector<int>arr(26,0);
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']++;
        }
        int mode=*max_element(arr.begin(),arr.end());
        string ans="";
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(arr[s[i]-'a']==mode){ans+=s[i];arr[s[i]-'a']--;}
        }
        reverse(ans.rbegin(),ans.rend());
        return ans;
    }
};