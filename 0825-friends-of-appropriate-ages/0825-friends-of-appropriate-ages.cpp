class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        unordered_map<int,int>mp;
        for(int i:ages)mp[i]++;
        int a=0;
        for(int i:ages){
            for(auto &k:mp){
                int k1=k.first,k2=k.second;
                bool flag=false;
                if(k1<=0.5*i+7)flag=true;
                else if(k1>i)flag=true;
                else if(k1>100 && i<100)flag=true;
                if(!flag){
                    if(i!=k1)a+=k2;
                    else a+=(k2-1);
                }
                
            }
        }
        return a;
    }
};