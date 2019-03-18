class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        for(int i = 0; i < A.size(); ++i){
            if(A[i][0] == 0){
                for(int j = 0; j < A[i].size(); ++j){
                    if(A[i][j] == 1)
                        A[i][j] = 0;
                    else
                        A[i][j] = 1;
                }
            }
        }
        
        for(int j = 1; j < A[0].size(); ++j){
            int counter = 0;
            for(int i = 0; i < A.size(); ++i){
                if(A[i][j] == 0)
                    counter ++;
            }
            if(counter > (A.size() / 2)){
                for(int i = 0;i < A.size(); ++i){
                    if(A[i][j] == 0)
                        A[i][j] = 1;
                    else
                        A[i][j] = 0;
                }
            }
        }
        
        int sum = 0;
        for(int i = 0; i < A.size(); ++i){
            int num = 0;
            int tmp = 0;
            for(int j = A[0].size() - 1; j >= 0; --j){
                tmp += A[i][j] * pow(2, num);
                num++;
            }
            sum += tmp;
        }
        return sum;
    }
};
