class Solution {
public:
vector<int>nums2;
int f(vector<int>&nums1,int i,int j){
    vector<int>arr;
    for(int k=0;k<nums1.size();k++)
    {
        if(i==k||j==k)continue;
        arr.push_back(nums1[k]);
    }
    sort(arr.begin(),arr.end());
    int a=nums2[0]-arr[0];
    for(int k=1;k<arr.size();k++){
        if(nums2[k]-arr[k]==a)continue;
        return 1e9;
    }
    return a;
}
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(),nums2.end());
        this->nums2=nums2;
        int a=1e9;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums1.size();j++){
                if(i!=j)a=min(a,f(nums1,i,j));
            }
        }
        return a;
    }
};