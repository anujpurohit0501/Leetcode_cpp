class Solution {
public:
bool f(string &s){
    for(int i=1;i<s.size();i++){
        if(s[i-1] < s[i])return false;
    }return true;
}
    int nextGreaterElement(int n) {
        string s=to_string(n);
        if(f(s))return -1;
        int k=-1;
        for(int i=1;i<s.size();i++){
            if(s[i-1]<s[i])k=i-1;
        }
        int p=-1;
        for(int i=k+1;i<s.size();i++){
            if(s[i]>s[k])p=i;
        }
        swap(s[p],s[k]);
        int l=k+1,r=s.size()-1;
        while(l<r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
    long long q=stoll(s);
    if(q>(INT_MAX))return -1;
    return q;

    }
};