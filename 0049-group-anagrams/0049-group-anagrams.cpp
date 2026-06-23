class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<string>arr;
         for(string i:strs){
            vector<int>mp(26);
            fill(mp.begin(),mp.end(),0);
            for(char j:i ){
                int t=j-'a';
                mp[t]++;
            }string ss="";
            for(int& q:mp){
                ss+=to_string(q)+',';
            }arr.push_back(ss);
        }
        unordered_map<string,vector<string>>mpp;
        for(int i=0;i<strs.size();i++){
            mpp[arr[i]].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto& it:mpp){
            ans.push_back(it.second);
        }return ans;

        

    }
};