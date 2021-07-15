package L3_June1_Extra;

public class Patterns {

	public static void main(String[] args) {
		Pattern29(5);

	}

	public static void Pattern0(int n) {

		int row = 1;

		// row
		while (row <= n) {

			// work
			System.out.print("*");

			// prep
			row++;
			System.out.println();
		}

	}

	public static void Pattern1(int n) {

		int row = 1;

		// row
		while (row <= n) {

			// work
			for (int col = 1; col <= n; col++) {
				System.out.print("*");
			}

			// prep
			row++;
			System.out.println();
		}

	}

	public static void Pattern2(int n) {

		int row = 1;
		int nst = 1;

		// row
		while (row <= n) {

			// work
			for (int cst = 1; cst <= nst; cst++) {
				System.out.print("*");
			}

			// prep
			nst++;
			row++;
			System.out.println();
		}

	}

	public static void Pattern3(int n) {

		int row = 1;
		int nst = 5;

		// row
		while (row <= n) {

			// work
			for (int cst = 1; cst <= nst; cst++) {
				System.out.print("*");
			}

			// prep
			nst--;
			row++;
			System.out.println();
		}

	}

	public static void Pattern4(int n) {

		int row = 1;
		int nst = 1;
		int nsp = n - 1;

		// row
		while (row <= n) {

			// work
			for (int csp = 1; csp <= nsp; csp++) {
				System.out.print(" ");
			}

			for (int cst = 1; cst <= nst; cst++) {
				System.out.print("*");
			}

			// prep
			nst++;
			nsp--;
			row++;
			System.out.println();
		}

	}

	public static void Pattern7(int n) {

		int row = 1;

		// row
		while (row <= n) {

			// work
			for (int col = 1; col <= n; col++) {
				if (row == 1 || row == n || col == 1 || col == n)
					System.out.print("*");
				else
					System.out.print(" ");
			}

			// prep
			row++;
			System.out.println();
		}

	}

	public static void Pattern8(int n) {

		int row = 1;

		// row
		while (row <= n) {

			// work
			for (int col = 1; col <= n; col++) {
				if (row == col || row + col == n + 1)
					System.out.print("*");
				else
					System.out.print(" ");
			}

			// prep
			row++;
			System.out.println();
		}

	}

	public static void Pattern9(int n) {

		int row = 1;
		int nst = 1;
		int nsp = n - 1;

		// row
		while (row <= n) {

			// work
			for (int csp = 1; csp <= nsp; csp++) {
				System.out.print(" ");
			}

			for (int cst = 1; cst <= nst; cst++) {
				System.out.print("*");
			}

			// prep
			nst += 2;
			nsp--;
			row++;
			System.out.println();
		}

	}

	public static void Pattern11(int n) {

		int row = 1;
		int nst = 1;
		int nsp = n - 1;

		// row
		while (row <= n) {

			// work
			for (int csp = 1; csp <= nsp; csp++) {
				System.out.print(" ");
			}

			for (int cst = 1; cst <= nst; cst++) {
				if (cst % 2 != 0)
					System.out.print("*");
				else
					System.out.print(" ");
			}

			// prep
			nst += 2;
			nsp--;
			row++;
			System.out.println();
		}

	}

	public static void Pattern13(int n) {

		int nst = 1;
		int row = 1;
		int nr = 2 * n - 1;

		while (row <= nr) {

			// work
			for (int cst = 1; cst <= nst; cst++) {
				System.out.print("*");
			}

			// prep
			if (row <= nr / 2) {
				nst++;
			} else {
				nst--;
			}

			row++;
			System.out.println();
		}

	}

	public static void Pattern17(int n) {

		int row = 1;
		int nst = n / 2;
		int nsp = 1;

		while (row <= n) {

			// stars
			for (int cst = 1; cst <= nst; cst++) {
				System.out.print("*");
			}

			// spaces
			for (int csp = 1; csp <= nsp; csp++) {
				System.out.print(" ");
			}

			// stars
			for (int cst = 1; cst <= nst; cst++) {
				System.out.print("*");
			}

			// prep

			if (row <= n / 2) {
				nst--;
				nsp += 2;
			} else {
				nst++;
				nsp -= 2;
			}

			System.out.println();
			row++;
		}

	}

	public static void Pattern28(int n) {

		int row = 1;
		int nst = 1;
		int nsp = n - 1;

		int val = 1;

		// row
		while (row <= n) {

			val = row;

			// work
			for (int csp = 1; csp <= nsp; csp++) {
				System.out.print(" ");
			}

			for (int cst = 1; cst <= nst; cst++) {
				System.out.print(val);
				if (cst < row)
					// if (cst <= nst/2)
					val++;
				else
					val--;
			}

			// val = val + 2;
			// prep
			nst += 2;
			nsp--;
			row++;
			System.out.println();
		}

	}

	public static void Pattern29(int n) {

		int row = 1;
		int nst = 1;
		int nsp = n - 1;

		int csp = 1;
		int cst = 1;

		// row
		while (row <= n) {

			// work
			csp = 1;
			for (; csp <= nsp; csp++) {
				System.out.print(" ");
			}

			cst = 1;
			for (; cst <= nst; cst++) {
				if (cst == 1 || cst == nst) {
					System.out.print(row);
				} else {
					System.out.print(0);
				}
			}

			// prep
			nst += 2;
			nsp--;
			row++;
			System.out.println();
		}

	}

	public static void patternWithZeros(int n) {

		for (int row = 1; row <= n; row++) {

			for (int col = 1; col <= row; col++) {
				if (col == 1 || col == row) {
					System.out.print(row + "\t");
				} else {
					System.out.print(0 + "\t");
				}
			}

			System.out.println();
		}
	}

	public static void doubleSidedArrow(int n) {

		int nst = 1;
		int nsp1 = n - 1;
		int nsp2 = -1;

		int row = 1;

		int val;

		while (row <= n) {

			if (row < n / 2 + 1)
				val = row;
			else
				val = n - row + 1;

			// spaces
			for (int csp = 1; csp <= nsp1; csp++) {
				System.out.print(" ");
			}

			for (int cst = 1; cst <= nst; cst++) {
				System.out.print(val);
				val--;
			}

			// spaces
			for (int csp = 1; csp <= nsp2; csp++) {
				System.out.print(" ");
			}

			val++;
			if (row > 1 && row < n) {
				for (int cst = 1; cst <= nst; cst++) {
					System.out.print(val);
					val++;
				}
			}
			// prep

			if (row <= n / 2) {
				nsp1 -= 2;
				nst++;
				nsp2 += 2;
			} else {
				nsp1 += 2;
				nst--;
				nsp2 -= 2;
			}
			row++;
			System.out.println();
		}

	}

}
