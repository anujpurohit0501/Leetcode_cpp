class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& nums) {
        int n=s.size();
        vector<int>a(n+2,0);
        for(auto &i:nums){
            if(i[2]==0){
                a[i[0]]--;
                a[i[1]+1]++;
            }
            else {
                a[i[0]]++;
                a[i[1]+1]--;
            }
        }
        for(int i=1;i<a.size();i++){
            a[i]+=a[i-1];
        }
        int i=0;
        for(char c:s){
            int t=c-'a';
            t+=a[i];
            t=((t+26)%26+26)%26;
            s[i]=t+'a';
            i++;
        }
        return s;
    }
};