class Solution {
public:
vector<int>pp{31,28,31,30,31,30,31,31,30,31,30,31};
int f(string &s){
    string sub=s.substr(0,2);
    int p=stoi(sub);
    int d=0;
    for(int i=0;i<p-1;i++){
       d+=pp[i];
    }
    string u=s.substr(3,2);
    int o=stoi(u);
    return d+o;
}
    int countDaysTogether(string aa, string la, string ab, string lb) {
        vector<int>a(400,0);
        int ala=f(aa);
        int all=f(la);
        int ba=f(ab);
        int bl=f(lb);
        a[ala]++;
        a[all+1]--;
        a[ba]++;
        a[bl+1]--;
        for(int i=1;i<a.size();i++){
            a[i]+=a[i-1];
        }
        int ans=0;
        for(int i:a){
            if(i>1)ans++;
        }
        return ans;
    }
};