class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int p=power,a=0,sc=0;
        int l=0,r=tokens.size()-1;
        while(l<=r){
            int i=tokens[l],j=tokens[r];
            if(i<=p ){
                p-=i;
                sc++;
                l++;
                a=max(sc,a);
            }
            else if(sc>0){
                p+=j;
                sc--;
                r--;
            }else break;
        }return a;
    }
};