class Solution {
 public:
  int totNQueen(int n) {
    int ans = 0;
    Dfs(n, 0, vector<bool>(n), vector<bool>(2 * n - 1), vector<bool>(2 * n - 1),
        ans);
    return ans;
  }

 private:
  void Dfs(int n, int i, vector<bool>&& columns, vector<bool>&& diagonal1,
           vector<bool>&& diagoal2, int& ans) {
    if (i == n) {
      ++ans;
      return;
    }

    for (int j = 0; j < n; ++j) {
      if (columns[j] || diagonal1[i + j] || diagoal2[j - i + n - 1])
        continue;
      columns[j] = diagonal1[i + j] = diagoal2[j - i + n - 1] = true;
      Dfs(n, i + 1, move(columns), move(diagonal1), move(diagoal2), ans);
      columns[j] = diagonal1[i + j] = diagoal2[j - i + n - 1] = false;
    }
  }
};
