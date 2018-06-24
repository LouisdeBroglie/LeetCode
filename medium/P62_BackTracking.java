package test123;

public class P62_BackTracking {
	private int Path(int x, int y) {
		if (x * y == 0)
			return 1;
		return Path(x - 1, y) + Path(x, y - 1);
	}

	public int uniquePaths(int m, int n) {

		return Path(m - 1, n - 1);
	}
}
