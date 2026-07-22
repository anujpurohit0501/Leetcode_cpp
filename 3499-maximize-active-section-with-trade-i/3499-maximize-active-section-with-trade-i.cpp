class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int sum=0;
        vector<pair<int,int>>arr;
        int ones=0;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            
            char c=s[i];
            if(c=='1')ones++;
            if(c=='0')sum++;
            if(c=='1')cnt++;
            if(c=='0' &&i>0 &&s[i-1]=='1'){
                
                arr.push_back({1,cnt});
                cnt=0;

            }
            else if(c=='1' &&i>0 &&s[i-1]=='0') {
                
                
                arr.push_back({0,sum});
                sum=0;
            }
        }
        if(s[s.size()-1]=='0')arr.push_back({0,sum});
        else arr.push_back({1,cnt});

        int mx=0;  
        for(int i=1;i<arr.size()-1;i++){

           if(arr[i-1].first==0&&arr[i].first==1&&arr[i+1].first==0) mx=max(mx,arr[i-1].second+arr[i+1].second);
        }return ones+mx;
        
    }
};