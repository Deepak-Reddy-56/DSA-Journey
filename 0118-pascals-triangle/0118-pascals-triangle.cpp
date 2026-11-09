class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> matrix;
        for(int i=1;i<=numRows;i++){
            int sum = 1;
            vector<int> templist;
            templist.push_back(sum);
            for(int j=1; j<i;j++){
                sum =  sum*(i-j);
                sum = sum/(j);
                templist.push_back(sum);
            }
            matrix.push_back(templist);
        }
        return matrix;
    }
};