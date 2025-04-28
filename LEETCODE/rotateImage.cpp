#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    void rotate( vector<vector<int>>& matrix){
        //first get the dimensions of the matrix
        int n = matrix.size();

        //transpose the matrix
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        //flip the matrix
        for(int i = 0; i < n;i++){
            for(int j = 0; j < n/2; j++){
                swap(matrix[i][j], matrix[i][n-j-1]);
            }
        }
    }
};

int main() {
    Solution solution;

    // Example matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Rotate the matrix
    solution.rotate(matrix);

    // Print the rotated matrix
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}