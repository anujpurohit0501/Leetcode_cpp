class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int k=0;
        for(int i=0;i<s.size();i++){
            pair<int,int>p;
            for(int j=s.size()-1;j>=i;j--){
                if(s[j]>p.first){
                    p={s[j],j};
                }
            }
            if(s[i]<s[p.second]){
                    swap(s[i],s[p.second]);
                    break;
            }
        }
        int l=stoi(s);
        return l;


    }
};