class Solution {

public:
    string removeDuplicates(string s, int k) {

        stack<pair<char, int>> st;

        for (char c : s) {

            if (st.empty() || st.top().first != c)
                st.push({c, 1});

            else {

                if (st.top().second + 1 == k) {

                    st.pop();

                }

                else
                    st.top().second++;
            }
        }

        string ans = "";

        while (st.empty() == 0) {

            while (st.top().second--)
                ans += st.top().first;

            st.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};