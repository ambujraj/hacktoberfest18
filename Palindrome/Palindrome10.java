import java.io.Console;

public class Palindrome {

	public static void main(String[] args) {
		System.out.println("Enter a number:");
		Console console = System.console();
		try {
			int number = Integer.valueOf(console.readLine());

			String intStr = String.valueOf(number);
			System.out.println("Is palindrome? " + intStr.equals(new StringBuilder(intStr).reverse().toString()));
		} catch (Exception e) {
			System.out.println("Something went wrong");
			System.exit(-1);
		}
	}
}
