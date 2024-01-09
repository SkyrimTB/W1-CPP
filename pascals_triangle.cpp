#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numRows = 8;
    vector<vector<int>> pascalTriangle;

    for (int i = 0; i < numRows; i++) {
        // Create a row with i + 1 elements
        vector<int> row(i + 1, 1);

        // Calculate the values for the inner cells of the row
        for (int j = 1; j < i; j++) {
            row[j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
        }

        // Add the filled row
        pascalTriangle.push_back(row);
    }

    // Print out
    for (const auto& row : pascalTriangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
