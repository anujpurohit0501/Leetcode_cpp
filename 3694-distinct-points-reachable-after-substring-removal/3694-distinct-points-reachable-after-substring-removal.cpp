class Solution {
public:
    int distinctPoints(string s, int k) {
        set<pair<int,int>>sett;
        
        int x=0,y=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='U')y++;
            else if(s[i]=='D')y--;
            else if(s[i]=='L')x--;
            else x++;
        }
        for(int i=0;i<k;i++){
            if(s[i]=='U')y--;
            else if(s[i]=='D')y++;
            else if(s[i]=='L')x++;
            else x--;
        }
        sett.insert({x,y});
        int j=0;
        for(int i=k;i<s.size();i++,j++){
            if(s[j]=='U')y++;
            else if(s[j]=='D')y--;
            else if(s[j]=='L')x--;
            else if(s[j]=='R') x++;

            if(s[i]=='U')y--;
            else if(s[i]=='D')y++;
            else if(s[i]=='L')x++;
            else if(s[i]=='R')x--;

            sett.insert({x,y});
        }return sett.size();
    }
};