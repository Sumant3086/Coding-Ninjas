// Problem statement
// You are given an integer 'N'. For a given 'N' x 'N' chessboard, find a way to place 'N' queens such that no queen can attack any other queen on the chessboard.

// A queen can be killed when it lies in the same row, or same column, or the same diagonal of any of the other queens. You have to print all such configurations.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= 'N' <= 10

// Time Limit: 1sec


// For Example:
// For a chessboard of size 4*4
// The configurations are 

// Sample Input 1:
// 4
// Sample Output 1:
// 0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0
// 0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0 
// Explanation For Sample Input 1:
// Output depicts two possible configurations of the chessboard for 4 queens.

// The Chessboard matrix for the first configuration looks as follows:-

// 0 0 1 0
// 1 0 0 0
// 0 0 0 1
// 0 1 0 0

// Queen contained cell is depicted by 1. As seen, No queen is in the same row, column, or diagonal as the other queens. Hence this is a valid configuration.
// Sample Input 2:
// 3
// Sample Output2:
//       (Blank)
// Explanation For Sample Input 2:
// Since no possible configuration exists for 3 Queen's.The output remains Empty.

bool isSafe(vector<vector<int>> &board, int row, int col, int n) {
  // check for backward movement
  int x = row;
  int y = col;
  while (y >= 0) {
    if (board[x][y] == 1) {
      return false;
    }
    y--;
  }
  // check for upper diagonal
  x = row;
  y = col;
  while (x >= 0 && y >= 0) {
    if (board[x][y] == 1) {
      return false;
    }
    x--;
    y--;
  }
  // check for lower diagonal
  x = row;
  y = col;
  while (x < n && y >= 0) {
    if (board[x][y] == 1) {
      return false;
    }
    x++;
    y--;
  }
  return true;
}
void solve(vector<vector<int>> &board, vector<vector<int>> &ans, int n,
           int col) {
  // base case
  if (col == n) {
    vector<int> temp;
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        temp.push_back(board[i][j]);
      }
    }
    ans.push_back(temp);
    return;
  }
  for (int row = 0; row < n; row++){
    if (isSafe(board, row, col, n)){
      // action
      board[row][col] = 1;
      // recursive call
      solve(board, ans, n, col + 1);
      // backtrack
      board[row][col] = 0;
    }

  }

}
vector<vector<int>> solveNQueens(int n) {
  // Write your code here.
  vector<vector<int>> board(n, vector<int>(n, 0));
  vector<vector<int>> ans;
  int col = 0;
  solve(board, ans, n, col);
  return ans;
}