/*You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.*/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int st = 0, en = row * col - 1;
        while (st <= en) {
            int mid = st + (en - st) / 2;
            int element = matrix[mid / col][mid % col];
            if (element == target) {
                return true;
            } else if (element > target) {
                en = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return false;
    }
};

int main() {
    Solution solution;

    // Example input
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 3;

    bool result = solution.searchMatrix(matrix, target);

    // Print the result
    if (result) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}

