class Solution {
public:
    string removeStars(string s) {
        string ans="";
        vector<char>arr;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*')arr.push_back(s[i]);
            else {
                arr.back();
                arr.pop_back();
            }
        }
        for(char &c:arr)ans+=c;
        return ans;
    }
};