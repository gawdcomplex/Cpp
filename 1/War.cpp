#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> decodeTargets(int m, int n, const vector<char>& targets, const vector<int>& columnIndices, const vector<int>& rowPointers) {
    vector<vector<char>> result(m, vector<char>(n, 'z'));
    int targetIndex = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = rowPointers[i]; j < rowPointers[i+1]; ++j) {
            result[i][columnIndices[j]] = targets[targetIndex++];
        }
    }
    return result;
}

void printMatrix(const vector<vector<char>>& matrix) {
    for (const auto& row : matrix) {
        for (char c : row) {
            cout << c << " ";
        }
        cout << endl;
    }
}

int main() {
    int m1 = 7;
    int n1 = 7;
    vector<char> targets1 = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
    vector<int> columnIndices1 = {5, 1, 6, 3, 3, 4, 5, 0, 5, 3, 5};
    vector<int> rowPointers1 = {0, 1, 3, 4, 7, 8, 9, 11};

    vector<vector<char>> result1 = decodeTargets(m1, n1, targets1, columnIndices1, rowPointers1);
    printMatrix(result1);

    int m2 = 7;
    int n2 = 6;
    vector<char> targets2 = {'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u'};
    vector<int> columnIndices2 = {5, 3, 4, 0, 2, 4, 0, 1, 3, 4};
    vector<int> rowPointers2 = {0, 1, 1, 3, 4, 5, 6, 10};

    vector<vector<char>> result2 = decodeTargets(m2, n2, targets2, columnIndices2, rowPointers2);
    printMatrix(result2);

    return 0;
}
