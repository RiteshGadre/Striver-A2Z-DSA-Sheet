class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top= 0;
        int left= 0;
        int bot= matrix.size()-1;
        int right= matrix[0].size()-1;
        int count= 0;
        int cnd= matrix.size()*matrix[0].size();

        while(left<=right && top<=bot){
            for(int i= left; i<=right; i++){
                ans.push_back(matrix[top][i]);
                count++;
            }
            top++;
            if(count== cnd) break;
            
            for(int i= top; i<=bot; i++){
                ans.push_back(matrix[i][right]);
                count++;
            }
            right--;
            if(count== cnd) break;

            for(int i= right; i>=left; i--){
                ans.push_back(matrix[bot][i]);
                count++;
            }
            bot--;
            if(count== cnd) break;

            for(int i= bot; i>=top; i--){
                ans.push_back(matrix[i][left]);
                count++;
            }
            left++;
            if(count== cnd) break;
        }

        return ans;
    }
};
