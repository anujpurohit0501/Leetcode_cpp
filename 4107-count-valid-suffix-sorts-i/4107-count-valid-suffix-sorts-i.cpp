class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {
        unordered_set<int>st;
        vector<int>q,p;
        q=nums;
        p=target;
        sort(q.begin(),q.end());
        sort(p.begin(),p.end());
        if(p!=q)return 0;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(target[i+1]<=target[i])st.insert(i);
            else break;
        }
        st.insert(n-1);
        for(int i:st)cout<< i;
        int a=0;
        for(int i=0;i<n;i++){
            if(i-1>=0&&nums[i-1]!=target[i-1])break;
            if(st.contains(i))a++;
        }
        
        return a;
    }
};