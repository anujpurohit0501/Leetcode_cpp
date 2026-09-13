class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int a=0;
        for(int i=0;i<grumpy.size();i++){
            if(grumpy[i]==0)a+=customers[i];
        }
        int b=0,n=grumpy.size();
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1)b+=customers[i];
        }
        int mx=b;
        for(int i=1;i<n-minutes+1;i++){
            int j=i+minutes-1;
            if(grumpy[j]==1)b+=customers[j];
            if(grumpy[i-1]==1)b-=customers[i-1];
            mx=max(mx,b);
        }return a+mx;
    }
};