class Solution {
    public int islandPerimeter(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    if ((j > 0 && grid[i][j - 1] == 0) || j == 0)
                        cnt++;

                    if ((i > 0 && grid[i - 1][j] == 0) || i == 0)
                        cnt++;

                    if ((j < m - 1 && grid[i][j + 1] == 0) || j == m - 1)
                        cnt++;

                    if ((i < n - 1 && grid[i + 1][j] == 0) || i == n - 1)
                        cnt++;
                }
            }
        }
        return cnt;
    }
}