class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,vector<int>>mpp;
        for(auto i:reservedSeats)mpp[i[0]].push_back(i[1]);
        int c=0;
        for(auto i:mpp){
            vector<bool>arr(11,true);
            for(int l:i.second){
                arr[l]=false;
            }
            
            bool l=arr[2]&&arr[3]&&arr[4]&&arr[5];
            bool m=arr[4]&&arr[5]&&arr[6]&&arr[7];
            bool r=arr[6]&&arr[7]&&arr[8]&&arr[9];
            if(l&&r)c+=2;
            else if (l||r||m)c++;
            

        }return c+(n-mpp.size())*2;

    }
};