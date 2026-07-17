class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums2.size();i++)mpp[nums2[i]]=i;
        
        for(int i=0;i<nums1.size();i++){
            int ind=mpp[nums1[i]];
            bool check=true;
            for(int j=ind+1;j<nums2.size();j++){
                if(nums2[j]>nums1[i]){nums1[i]=nums2[j];
                check=false;
                break;
                }

            }if(check==true)nums1[i]=-1;
        }return nums1;
    }
};