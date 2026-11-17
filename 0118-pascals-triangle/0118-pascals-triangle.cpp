class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n==1)return {{1}};
        if(n==2)return {{1},{1,1}};
        vector<vector<int>>a;
        a.push_back({1});
        a.push_back({1,1});
        while(a.size()<n){
            vector<int>b;
            b.push_back(1);
            vector<int>c;
            c=a.back();
            for(int i=1;i<c.size();i++){
                int e=c[i-1]+c[i];
                b.push_back(e);
            }
            b.push_back(1);
            a.push_back(b);

        }
        return a;
    }
};