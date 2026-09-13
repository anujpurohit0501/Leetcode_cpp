class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        vector<int>s;
        s.push_back(0);
        for(int i=1;i<position.size();i++){
            if(position[i]-position[i-1]<=distance)s.back()=i;
            else s.push_back(i);
        }
        stack<int>st;
        for(int i:s){
            while(st.empty()==0 && st.top()>speed[i])st.pop();
            st.push(speed[i]);
        }return st.size();
    }
};