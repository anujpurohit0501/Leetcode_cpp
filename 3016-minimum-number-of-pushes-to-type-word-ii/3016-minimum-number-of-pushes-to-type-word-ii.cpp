class Solution {
public:
    int minimumPushes(string word) {
        vector<int>arr(26,0);
        for(char c:word)arr[c-'a']++;
        sort(arr.rbegin(),arr.rend());
        int ans=0;
        for(int i=0;i<26;i++){
            if(i<8)ans+=arr[i];
            else if(i<16)ans+=2*arr[i];
            else if(i<24)ans+=3*arr[i];
            else ans+=arr[i]*4;
        }return ans;
    }
};