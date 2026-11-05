class Solution {
public:
    int appendCharacters(string s, string t) {
        unordered_map<char,vector<int>>mp;
        int i=0;
        for(char c:s){
            mp[c].push_back(i);
            i++;
        }
        int a=-1;
        int m=0;
        for(char c:t){
            if(mp.find(c)==mp.end() || mp[c].back()<a){
                break;
            }
            auto k=upper_bound(mp[c].begin(),mp[c].end(),a);
           
            m++;
            a=*k;
        }
        return t.size()-m;
    }
};