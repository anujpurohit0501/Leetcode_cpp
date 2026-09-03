class Solution {
public:
    
    string s;
    int f(char x,char y,char ll,char pp,int k){
        int h=0,v=0;
        int ans=0;
        for(char c:s){
            if(c==x)v++;
            else if(c==ll){
                if(k>0){
                    k--;
                    v++;
                }else v--;
            }
            else if(c==y)h++;
            else {
                if(k>0){
                k--;
                h++;}
                else h--;
            }

            int x=abs(v)+abs(h);
            
            ans=max(ans,x);

        }return ans;
    }
    int maxDistance(string s, int k) {
        this->s=s;
        
        int a= f('N','E','S','W',k);
        int b=f( 'N', 'W','S','E',k);
        int cc=f('S' ,'E','N','W',k);
        int d=f('S','W','N','E',k);
        return max(a,max(b,max(cc,d)));

    }
};