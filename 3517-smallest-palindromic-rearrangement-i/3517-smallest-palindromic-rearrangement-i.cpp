class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>arr(26,0);
        for(char c:s)arr[c-'a']++;
        int n=s.size();
        vector<char>ans(n);
        int i=0;
        int k=n/2;
        int j=0;
        while(i<arr.size()){
            while(arr[i]>1){
                ans[j]=i+'a';
                ans[n-j-1]=i+'a';
                arr[i]-=2;
                j++;
            }if(arr[i]==1)ans[k]=i+'a';
            i++;
        }return string(ans.begin(),ans.end());
        
    }
};