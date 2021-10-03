vector<int> solve(vector<vector<int>>& matrix) {
    vector<int> a;
    if (matrix.size() == 0) {
        return a;
    }

    int top, down, left, right;
    int direction = 0;

    top = 0;
    down = matrix.size() - 1;
    left = 0;
    right = matrix[0].size() - 1;

    while (left <= right && top <= down) {
        if (direction == 0) {
            for (int i = left; i <= right; i++) {
                a.push_back(matrix[top][i]);
            }
            top++;
        }

        else if (direction == 1) {
            for (int i = top; i <= down; i++) {
                a.push_back(matrix[i][right]);
            }
            right--;
        }

        else if (direction == 2) {
            for (int i = right; i >= left; i--) {
                a.push_back(matrix[down][i]);
            }
            down--;
        }

        else if (direction == 3) {
            for (int i = down; i >= top; i--) {
                a.push_back(matrix[i][left]);
            }
            left++;
        }

        direction = (direction + 1) % 4;
    }

    return a;
}