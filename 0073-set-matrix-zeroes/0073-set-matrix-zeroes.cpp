class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        if(matrix[0].size()==1){
            int flag = 0;
            for(int i=0; i<matrix.size();i++){
                for(int j=0;j<matrix[i].size();j++){
                    if(matrix[i][j]==0){
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag==1){
                for(int i=0; i<matrix.size();i++){
                for(int j=0;j<matrix[i].size();j++){
                    matrix[i][j]=0;
                }
            }
            }
            return;
        }

        int k = matrix[0][0];
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==0){
                matrix[i][0] = 0;
                if(j!=0)
                matrix[0][j] = 0;
                else
                k = 0;
            }
        }
    }

    for(int i=matrix.size()-1;i>=1;i--){
        for(int j=matrix[i].size()-1;j>=1;j--){
            if(matrix[i][0] == 0 ||  matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    for(int i=matrix[0].size()-1;i>=1;i--){
        if(matrix[0][0]==0){
            matrix[0][i] = 0;
        }
    }

    for(int i=0;i<matrix.size();i++){
        if(k==0){
            matrix[i][0] = 0;
        }
    }
    }
};