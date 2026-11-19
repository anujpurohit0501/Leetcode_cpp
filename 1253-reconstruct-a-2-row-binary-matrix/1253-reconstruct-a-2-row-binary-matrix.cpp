class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        int uppe=upper,lowe=lower;
        int acc=accumulate(colsum.begin(),colsum.end(),0);
        if(acc!=lower+upper)return {};
        vector<vector<int>>a;
        int n=colsum.size();
        vector<int>b(n,0);
        vector<int>c(n,0);
        for(int i=0;i<colsum.size();i++){
            if(colsum[i]==2){
                b[i]=1;
                c[i]=1;
                upper--;
                lower--;}
            if(colsum[i]==0){
                b[i]=0;
                c[i]=0;
            }
        }
        for(int i=0;i<colsum.size()&&upper;i++){
                if(colsum[i]==1){
                    b[i]=1;
                    colsum[i]=0;
                    upper--;
                }
            }
        
       
        for(int i=0;i<colsum.size()&&lower;i++){
                if(colsum[i]==1){
                    c[i]=1;
                    lower--;
                }
            }
        
        a.push_back(b);
        a.push_back(c);
        int bsum=accumulate(b.begin(),b.end(),0);
        int csum=accumulate(c.begin(),c.end(),0);
        if((bsum!=uppe)||(csum!=lowe))return {};
        return a;
    }
};