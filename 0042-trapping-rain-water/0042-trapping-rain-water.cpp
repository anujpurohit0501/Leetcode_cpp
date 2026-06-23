class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left(n),right(n);
        int leftmax=0,rightmax=0;
        for(int i=0;i<n;i++){
            leftmax=max(leftmax,height[i]);
            left[i]=leftmax;
        }for(int i=n-1;i>=0;i--){
            rightmax=max(rightmax,height[i]);
            right[i]=rightmax;
        }int water=0;
        for(int i=0;i<n;i++){
            water+=min(left[i],right[i])-height[i];
        }return water;
    }
};