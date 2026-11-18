class Solution {
public:
int f(vector<int>&n1,vector<int>&n2){
    unordered_set<int>st;
    for(int i=0;i<n1.size()-1;i++){
        if(n1[i]>n1.back())st.insert(i);
        if(n2[i]>n2.back())st.insert(i);
    }
    for(int i=0;i<n1.size()-1;i++){
        if(n1[i]>n1.back()&&n2[i]>n1.back())return -1;
        if(n1[i]>n2.back()&&n2[i]>n2.back())return -1;
        if(n1[i]>n2.back()&&n1[i]>n1.back())return -1;
        if(n2[i]>n1.back()&&n2[i]>n2.back())return -1;
        
    }
    return st.size();
}
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        int a=f(nums1,nums2);
        int n=nums1.size();
        swap(nums1[n-1],nums2[n-1]);
        int b=1;
        b+=f(nums1,nums2);
        if(a==-1&&b==0)return -1;
        return min(a,b);
    }
};