class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        int k=sum;
        int j=0;
        for(int i=0;i<num;i++){
            if(sum>0)ans.push_back(min(9,sum)+'0');
            else break;
            j++;
            sum-=9;
        }
        
        if(j<num){
            while(j<num){ans+='0';j++;}
        }
        int u=0;
        for(char c:ans){
            u+=c-'0';
        }if(u!=k)return "";
        return ans;
        
    }
};