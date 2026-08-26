class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        
        int l=0,r=0;
        int sum=0;
        int len=10000;
        while(r<s.size()){
                sum+=s[r]-'0';
            while(l<=r && sum>=k){
                
                if(sum==k){
                    len=min(len,r-l+1);
                    
                }sum-=s[l]-'0';
                l++;
                
            }
            r++;
        }
        string q="";
        
        for(int i=0;i+len<=s.size();i++){
            int h=0;
            
            string f="";
            for(int j=i;j<len+i;j++){
                h+=s[j]-'0';
                f+=s[j];
                
            }
            if(k==h ){
                if( q==""||q>f){q=f;}
            }
        }return q;
        
    }
};