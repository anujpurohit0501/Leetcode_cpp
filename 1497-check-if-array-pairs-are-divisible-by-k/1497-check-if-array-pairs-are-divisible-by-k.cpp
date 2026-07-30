class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>mpp;
        for(int i:arr)mpp[((i%k)+k)%k]++;
        if(mpp[0]%2==1)return false;
        for(int i:arr){
            int p=((i%k)+k)%k;
            int q=((k-p)%k+k)%k;
            if(mpp[p]!=mpp[q])return false;
            else {
                mpp[p]--;
                mpp[q]--;
            }

        }
        
        return true;

    }
};