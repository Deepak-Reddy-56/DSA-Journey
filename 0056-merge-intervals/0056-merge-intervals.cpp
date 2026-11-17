class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        ans.push_back({intervals[0][0], intervals[0][1]});
        int j = 0;
        for(int i=1; i<intervals.size(); i++){
            int start = intervals[i][0];
            int end = intervals[i][1];

            if(start <= ans[j][1]){
                ans[j][1] = max(end, ans[j][1]);
            }

            else{
                ans.push_back({start, end});
                j++;
            }
        }
        return ans;
    }
};