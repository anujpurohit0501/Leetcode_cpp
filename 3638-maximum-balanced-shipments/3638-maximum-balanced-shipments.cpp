class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int count=0;
        int n=weight.size();
        vector<int>viz(n,0);
        
        for(int i=1;i<weight.size();i++){
            if(weight[i-1]>weight[i] &&  !viz[i-1] && !viz[i] ){
            count++;
            viz[i-1]=1;
            viz[i]=1;    

            }
        }return count;
    }
};