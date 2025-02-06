class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix[0][0]>target)
            return false;
        else{
      
            for(int i=0;i<size(matrix);i++){
            
                for(int j=0;j<size(matrix[0]);j++){
                if(matrix[i][j]>target)
                    if(matrix[i][j]==matrix[size(matrix)-1][j])
                        return false;
                    else
                       j==size(matrix);
                else if(target==matrix[i][j])
                    return true;
                
            }

        }
        }
        return false;
        
    }
};