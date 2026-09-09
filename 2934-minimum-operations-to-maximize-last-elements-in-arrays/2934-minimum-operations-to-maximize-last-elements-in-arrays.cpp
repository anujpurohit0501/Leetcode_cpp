class Solution {
public:
int n;
int f(vector<int>& nums1, vector<int>& nums2){
    int a=0;
    for(int i=0;i<n-1;i++){
            int x=nums1[n-1],y=nums2[n-1];
            int one=nums1[i],two=nums2[i];
            if(one<=x && two<=y)continue;
            
            if(two<=x && one<=y)a++;
            else return -1;
            
        }return a;
}
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        
        n=nums1.size();
        int e=f(nums1,nums2);
        int t=nums1[n-1];
        nums1[n-1]=nums2[n-1];
        nums2[n-1]=t;
        int y=f(nums1,nums2);
        if(y==-1&&e==-1)return -1;
        if(y==-1)return e;
        if(e==-1)return y+1;
        return min(e,y+1);
    }
};