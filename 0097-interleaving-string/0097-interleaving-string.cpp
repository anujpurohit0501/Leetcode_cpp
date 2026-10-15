class Solution {
public:
string s1,s2,s3;
map<pair<int,int>,bool>mp;
bool f(int i,int j){
    if(i==s1.size()&&j==s2.size())return true;
    if(i+j>s3.size())return false;
    //take notake
    bool a=0;
    pair<int,int>q={i,j};
    if(mp.find(q)!=mp.end())return mp[q];
    if(i<s1.size()&&s1[i]==s3[i+j])a=a||f(i+1,j);
    if(j<s2.size()&&s2[j]==s3[i+j])a=a||f(i,j+1);
    return mp[q]=a;
}
    bool isInterleave(string s1, string s2, string s3) {
        this->s1=s1;
        this->s2=s2;
        this->s3=s3;
        if(s3.size()!=s1.size()+s2.size())return false;
        return f(0,0);
    }
};