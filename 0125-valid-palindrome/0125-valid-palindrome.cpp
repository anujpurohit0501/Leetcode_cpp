class Solution {
public:

    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            int l=s[i];
            int r=s[j];
            if(s[i]>=65&&s[i]<91)l+=32;
             if(s[j]>=65&&s[j]<91)r+=32;
            if(((l>=48&&l<=57) && (r>=48&&r<=56))||(l>=97&&l<(97+26) && r>=97&&r<(97+26))){
                if((l!=r))return false;
            }
            string upp="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            string low="qwertyuiopasdfghjklzxcvbnm";
            string num="0123456789";
             if(find(upp.begin(),upp.end(),s[i])==upp.end() && find(low.begin(),low.end(),s[i])==low.end()&&find(num.begin(),num.end(),s[i])==num.end())i++;
            
            else if(find(upp.begin(),upp.end(),s[j])==upp.end()&&find(low.begin(),low.end(),s[j])==low.end()&&find(num.begin(),num.end(),s[j])==num.end())j--;
            
            
            
            else {
                if(l!=r)return false;
                i++;
                j--;
            }
        }return true;
    }
};