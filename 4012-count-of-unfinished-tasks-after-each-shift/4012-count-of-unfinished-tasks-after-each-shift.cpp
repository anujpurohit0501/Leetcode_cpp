class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        long long sum=0;
        vector<long long>pref;
        for(int i=0;i<tasks.size();i++){
            sum+=tasks[i];
            pref.push_back(sum);
        }
        
        long long s=0;
        vector<int>ans;
        int n=tasks.size();
        for(int i=0;i<shifts.size();i++){
            int num=shifts[i];
            s+=num;
            if(s>=pref[pref.size()-1]){
                ans.push_back(0);
                s=0;
            }
            else {
            int up=upper_bound(pref.begin(),pref.end(),s)-pref.begin();
            int k=n-up;
            ans.push_back(k);
            }

        }
        return ans;
    }
};