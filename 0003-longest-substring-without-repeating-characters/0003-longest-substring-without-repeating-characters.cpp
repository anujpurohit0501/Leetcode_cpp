int iio(string subb,int len){
    for(int i=0;i<=subb.size()-len;i++){
        unordered_set<char>st;
        for(int j=i;j<len+i;j++){
            st.insert(subb[j]);
        }if(st.size()==len)return true;
    }return false;

}
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=1,r=min(128,(int)s.size());
        while(l<=r){
            int mid=(l+r)/2;
            if(iio(s,mid))l=mid+1;
            else r=mid-1;
        }return r;
    }
};