class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<int, bool> rows;
        map<int, bool> cols;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(matrix[i][j]==0){
                   rows[i]= 1;
                   cols[j]= 1;                 
                }
            }
        }

        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(rows[i] || cols[j]){
                    matrix[i][j]= 0;                  
                }
            }
        }
    }
};
