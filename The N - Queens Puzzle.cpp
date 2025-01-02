//  The N - Queens Puzzle
// Moderate
// 80/80
// Contributed by
// 57 upvotes
// Asked in companies
// Problem statement
// The N Queens puzzle is the problem of placing N chess queens on an N * N chessboard such that no two queens attack each other.

// Given an integer ‘N’, print all distinct solutions to the ‘N’ queen puzzle.

// Two queens on the same chessboard can attack each other if any of the below condition satisfies:  
// 1. They share a row. 
// 2. They share a column. 
// 3. They share a diagonal. 
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 1
// 4   
// Sample Output 1:
// 0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0
// 0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0 
// Explanation for Sample Input 1:
// The 4 queens can be placed in two ways in a 4*4 chessboard. Both the configurations are shown in the below figure. 

// The chessboard matrix for the first configuration looks as follows:-
// 0 0 1 0
// 1 0 0 0
// 0 0 0 1
// 0 1 0 0
// Queen contained cell is depicted by 1. As we can see, No queen is in the same row, column or diagonal of the other queens. Hence this is a valid configuration.

// Similarly, the chessboard matrix for the second configuration looks as follows:-
// 0 1 0 0
// 0 0 0 1
// 1 0 0 0
// 0 0 1 0
// Queen contained cell is depicted by 1. As we can see, No queen is in the same row, column or diagonal of the other queens. Hence this is also a valid configuration.

// These are the only two valid configurations for 4-Queens. 
// Sample Input 2:
// 1
// 3
// Sample Output 2:
// Explanation of Sample Input 2:
// Since no possible configuration exists for 3 Queen's, the output remains empty. 

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
vector<vector<int>> nQueens(int n) {
  // Write your code here.
  vector<vector<int>> board(n, vector<int>(n, 0));
  vector<vector<int>> ans;
  int col = 0;
  solve(board, ans, n, col);
  return ans;
}