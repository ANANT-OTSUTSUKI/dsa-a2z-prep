#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rowMajor(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cout << matrix[i][j] << " ";
            }
        }
    }
};
