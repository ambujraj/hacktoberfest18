/* Author: Aditya Agrawal */
import java.util.Scanner;

public class Reverse_Array {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] arr = new int[n];
		for (int i = 0; i < n; i++)
			arr[i] = sc.nextInt();
		int[] revarr = reverseArray(arr, 0);
		for (int val : revarr) {
			System.out.print(val + " ");
		}

		sc.close();
	}

	public static int[] reverseArray(int[] arr, int vidx) {
		if (vidx >= arr.length / 2) {
			return arr;
		}

		int temp = arr[vidx];
		arr[vidx] = arr[arr.length - vidx - 1];
		arr[arr.length - vidx - 1] = temp;

		reverseArray(arr, vidx + 1);
		return arr;
	}
}
