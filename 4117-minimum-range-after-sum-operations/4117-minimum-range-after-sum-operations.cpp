class Solution {
public:
    int minRange(int a, int b, int c) {
        vector<int>v{a,b,c};
        sort(v.begin(),v.end());
        if(v.back()>v[0]+v[1]){
            v.pop_back();
            v.push_back(v[0]+v[1]);
        }
        return v.back()-v.front();
    }
};