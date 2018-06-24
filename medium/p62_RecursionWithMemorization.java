package test123;

public class p62_RecursionWithMemorization {
	private int f[][];

	private int Path(int x, int y) {
		if (x * y == 0)
			f[x][y] = 1;
		if (f[x][y] > 0)
			return f[x][y];
		f[x][y] = Path(x - 1, y) + Path(x, y - 1);

		return f[x][y];
	}

	public int uniquePaths(int m, int n) {
		f = new int[m][n];
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				f[i][j] = -1;
		return Path(m - 1, n - 1);
	}
}
