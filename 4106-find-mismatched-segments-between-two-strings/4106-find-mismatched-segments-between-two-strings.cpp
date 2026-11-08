class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        int i=0,j=0;
        int n=s1.size();
        vector<vector<string>>a;
        while(i<n&&j<n){
            if(s1[i]==s2[j]){
                i++;
                j++;
            }else {
                string p="",q="";

                while(s1[i]!=s2[j]){
                    p+=s1[i];
                    q+=s2[j];
                    i++;
                    j++;
                }
                a.push_back({p,q});
            }
        }
        return a;
    }
};