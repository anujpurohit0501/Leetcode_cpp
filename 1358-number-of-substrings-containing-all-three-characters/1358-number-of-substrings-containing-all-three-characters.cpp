class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>arr(3,0);
        int l=0,ans=0,n=s.size();
        for (int r=0;r<s.size();r++){
            arr[s[r]-'a']++;
            while(arr[0]>0 &&arr[1]>0 && arr[2]>0){
                ans+=n-r;
                arr[s[l]-'a']--;
                l++;
            }
            
        }return ans;
    }
};