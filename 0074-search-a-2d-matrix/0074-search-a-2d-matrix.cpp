class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(),col=matrix[0].size(),ans=-69;
        int l=0,r=row-1;
        while(l<=r){
            int mid=(l+r)/2;
            int o=matrix[mid][0],p=matrix[mid][col-1];
            if(target >=o && target<=p){
                ans=mid;
                break;
            }else if(target <o){
                r=mid-1;
            }else l=mid+1;
        }
        if(ans==-69)return false;
        l=0,r=col-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(matrix[ans][mid]==target)return true;
            else if(matrix[ans][mid]>target)r=mid-1;
            else l=mid+1;
        }return false;
    }
};