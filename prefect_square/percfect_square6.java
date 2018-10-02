import java.io.*;
import java.math.*;
public class Square {
	public static void main(String[] args) {
		System.out.println("Enter a number which is supposed to be square rooted:");

		Console console = System.console();
		try {

			int number = Integer.valueOf(console.readLine());

			double answer = Math.sqrt(number);

			if((int) answer == answer) {
				System.out.println("Number: " + answer + " is a perfect square root!");
			} else {
				System.out.println("Number: " + answer + " isn't a perfect square root!");
			}
		} catch(NumberFormatException e) {
			System.out.println("Bad number");
			System.exit(-1);
		}
	}

}