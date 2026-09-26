class Solution {
public:
    int longestSubarray(vector<int>& n, int k) {
        int a=-1e9;
        for(int i=0;i<n.size();i++){
            int s=0;
            unordered_set<int>st;
            int mx=-1e9;
            for(int j=i;j<n.size();j++){
                s+=n[j];
                st.insert(n[j]);
                if(s%k==0)a=max(a,j-i+1);
                else {
                    //rem
                    for(int y:st){
                        if((s-2*y)%k==0){
                            a=max(a,j-i+1);
                            break;
                        }
                    }
                }
            }
        }return max(a,0);
    }
};