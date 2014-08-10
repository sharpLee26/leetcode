class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        if(matrix.empty())
        {
            return;
        }
        vector<int> row_zero, col_zero;
        int row_size = matrix.size();
        int col_size = matrix[0].size();
        for(int i=0; i!=row_size; ++i)
        {
            for(int j=0; j!=col_size; ++j)
            {
                if(0 == matrix[i][j])
                {
                    row_zero.push_back(i);
                    col_zero.push_back(j);
                }
            }
        }
        if(!row_zero.empty())
        {
            for(int i=0; i!=row_zero.size(); ++i)
            {
                for(int j=0; j!=col_size; ++j)
                {
                    matrix[row_zero[i]][j] = 0;
                }
            }
        }
        if(!col_zero.empty())
        {
            for(int j=0; j!=col_zero.size(); ++j)
            {
                for(int i=0; i!=row_size; ++i)
                {
                    matrix[i][col_zero[j]] = 0;
                }
            }
        }
        
    }
};
