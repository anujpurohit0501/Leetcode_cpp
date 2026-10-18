class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int a = 0, b = 0;
        set<pair<int, int>> st;
        st.insert({a,b});
        while(true){
        
        if (grid[a][b] == 'U') {
            if (a == 0||st.contains({a-1,b}))
                return {a, b};
            else
                a--;
        } else if (grid[a][b] == 'D') {
            if (a == grid.size() - 1||st.contains({a+1,b}))
                return {a, b};
            else
                a++;
        } else if (grid[a][b] == 'L') {
            if (b == 0||st.contains({a,b-1}))
                return {a, b};
            else
                b--;
        } else if (grid[a][b] == 'R') {
            if (b == grid[0].size() - 1||st.contains({a,b+1}))
                return {a, b};
            else
                b++;
        }
        st.insert({0,0});
        st.insert({a, b});
        }
        return {a, b};
    }
};