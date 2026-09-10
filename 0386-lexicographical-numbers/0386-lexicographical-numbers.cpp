class Solution {
public:
    vector<int> lexicalOrder(int n) {
        set<string>stt;
        for(int i=1;i<=n;i++){
            string p=to_string(i);
            stt.insert(p);
        }
        vector<int>arr;
        for(auto i:stt){
            int k=stoi(i);
            arr.push_back(k);
        }return arr;
    }
};