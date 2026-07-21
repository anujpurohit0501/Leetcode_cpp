class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            int sub=(i+1)*(arr.size()-i);
            int odd=(int)ceil((sub)/2.0);
            count+=odd*arr[i];
        }return count;

    }
};
// arr = [1,4,2,5,3]
// pre= [1,5,7,13,16]