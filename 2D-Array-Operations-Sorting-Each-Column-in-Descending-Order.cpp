#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> array(rows, vector<int>(cols));

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }

    for (int col = 0; col < cols; ++col)
        for (int i = 0; i < rows - 1; ++i)
            for (int j = 0; j < rows - i - 1; ++j)
                if (array[j][col] < array[j + 1][col])
                    swap(array[j][col], array[j + 1][col]);

    cout << "Array after sorting each column in descending order:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << setw(4) << array[i][j];
        cout << endl;
    }

    return 0;
}
