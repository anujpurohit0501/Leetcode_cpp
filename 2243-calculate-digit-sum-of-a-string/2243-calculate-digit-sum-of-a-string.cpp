class Solution {
public:
string f(string &s,int&k){
    if(s.size()<=k)return s;
    vector<int>a;
    int sum=0;
    for(int i=0;i<s.size();i++){
        sum+=s[i]-'0';
        if((i+1)%k==0||i==s.size()-1){
            a.push_back(sum);
            sum=0;
        }
    }
    string p="";
    for(int i:a)p+=to_string(i);
    return f(p,k);

}
    string digitSum(string s, int k) {
        return f(s,k);
    }
};