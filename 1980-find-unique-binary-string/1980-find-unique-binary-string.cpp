class Solution {
public:
set<string>st;
int n;
string f(string p,int i) {
    if(i==n){
        if(!st.contains(p))return p;
         else return "";
    }
    p.push_back('0');
    if(f(p,i+1)!="")return f(p,i+1);
    p.pop_back();
    p.push_back('1');
    if(f(p,i+1)!="")return f(p,i+1);
    p.pop_back();
    return "";
}
    string findDifferentBinaryString(vector<string>& nums) {
        set<string>st{nums.begin(),nums.end()};
        n=nums[0].size();
        this->st=st;
        return f("",0);
   }
};