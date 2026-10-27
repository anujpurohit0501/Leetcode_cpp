class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>a;
        string s="";
        string p="";
        while(s.size()<n){
            s.push_back('.');
        }
        while(p.size()<n-1){
            p.push_back('#');
        }
        p.push_back('.');
        a.push_back(s);
        while(a.size()<m){
            a.push_back(p);
        }
        return a;
    }
};