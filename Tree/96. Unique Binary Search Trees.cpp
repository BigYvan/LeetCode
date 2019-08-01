class Solution {
public:
    int numTrees(int n) {

        int result[n + 1] = {0};
        result[0] = 1;
        result[1] = 1;
        if (n > 1){
            for (int i = 2; i < n + 1; i++){
                for (int j = 1; j < i + 1; j++){
                    result[i] += result[j - 1] * result[i - j];
                }
            }
        }


        return result[n];
    }
    
};