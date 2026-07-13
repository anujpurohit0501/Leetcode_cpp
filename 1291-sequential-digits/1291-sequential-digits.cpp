class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        vector<int>arr;

        for(int i=2;i<=9;i++){
            int j=0;
            for(int p=0;p+i<=9;p++){
            string k="";
            j=p;
            while(j<i+p){
                k+=s[j];
                j++;
            }
                arr.push_back(stoi(k));
            }
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=low && arr[i]<=high)ans.push_back(arr[i]);
        }return ans;

    }
};