class Solution {
public:
    static bool f(string &a ,string &b){
        if(a+b > b+a)return true;
        else return false;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>s;
        for(int i=0;i<nums.size();i++)
        {s.push_back(to_string(nums[i]));

        }
        sort(s.begin(),s.end(),f);
        string ans="";
        if(s[0]=="0")return "0";
        for(auto &i:s)ans+=i;
        return ans;
    }
};