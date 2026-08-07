class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        vector<int>arr(1e5+1,0);
        for(int i:asteroids)arr[i]++;
        long long sum=mass;
        for(long long i=0;i<arr.size();i++){
            if(arr[i]==0)continue;
            while(arr[i]--){
            if(i>sum)return false;
            sum+=i;
            }
        }
        return true;
    }
};