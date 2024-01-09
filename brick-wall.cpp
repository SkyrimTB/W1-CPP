#include <iostream>
#include <vector>
#include <string>
#include <format>

using namespace std;

// Helper function
int getMaxNumberWidth(int numRows) {
    int maxNum = 1;
    for (int i = 0; i < numRows; ++i) {
        maxNum = maxNum * (numRows - i) / (i + 1);
    }
    int width = 0;
    while (maxNum != 0) {
        maxNum /= 10;
        ++width;
    }
    return width;
}

int main() {
    int numRows = 8;
    vector<vector<int>> pascalTriangle(numRows);

    int fieldWidth = getMaxNumberWidth(numRows) + 2; // Adding 2 for padding on each side

    for (int i = 0; i < numRows; i++) {
        pascalTriangle[i].resize(i + 1, 1);

        for (int j = 1; j < i; j++) {
            pascalTriangle[i][j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
        }
    }

    for (int i = 0; i < numRows; i++) {
        int offset = (numRows - i) * (fieldWidth / 2);
        cout << string(offset, ' '); // Offset for the first number of each row
        for (int j = 0; j <= i; j++) {
            cout << format("{:^{}}", pascalTriangle[i][j], fieldWidth);
        }
        cout << endl;
    }

    return 0;
}
