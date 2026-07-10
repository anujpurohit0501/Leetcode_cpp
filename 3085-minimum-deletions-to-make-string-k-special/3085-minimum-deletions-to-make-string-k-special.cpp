class Solution {
public:
    int minimumDeletions(string word, int k) {
        vector<int>arr(26,0);
        int count=1e9;
        for(char &c:word){
            int num=c-'a';
            arr[num]++;
        }
        for(int i=0;i<arr.size();i++){
            int sum=0;
            if(arr[i]==0)continue;
            for(int j=0;j<arr.size();j++){
                if(arr[j]==0)continue;
                if(arr[j]<arr[i])sum+=arr[j];
                else if (arr[j]>arr[i]+k)sum+=(arr[j]-arr[i]-k);
            }

            count=min(count,sum);
        }return count;

    }
};