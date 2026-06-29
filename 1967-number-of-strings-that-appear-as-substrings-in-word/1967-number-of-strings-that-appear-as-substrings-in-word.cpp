class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        unordered_set<string>stt;
        for(int i=0;i<word.size();i++){
            string s="";
            for(int j=i;j<word.size();j++){
                s+=word[j];stt.insert(s);
            }
        }int count=0;
        for(auto &s:patterns){
            if(stt.find(s)!=stt.end()){
                count++;
            }
        }return count;
    }
};