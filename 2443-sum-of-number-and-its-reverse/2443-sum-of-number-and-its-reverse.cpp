class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        
        int i=0;
        while(i<=num){
            string s=to_string(i);
            reverse(s.begin(),s.end());
            int k=stoi(s);
            if(i+k==num)return true;
            i++;
        }
        return false;
    }
};