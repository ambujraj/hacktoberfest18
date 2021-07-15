//Write a class method recursivePrint(int count) of a class Recursion which prints "z y x w "
//on the first line, "z y x " on the second line, ..., "z " on the fourth line by recursion if count is 4. If
//count is n (n <= 26), n lines should be printed and the first line contains "z y x ...? ", where "?" is the
//nth letter starting from "z". Note that there is a space after each letter.
//Test it using a call Recursion.recursivePrint(5) in the main() method a class TestRecursion.
//public class RecursivePrint {

public class Recursion {
	
	static void RecursivePrint(int n){
		String s = "zyxwvutsrqponmlkjihgfedcba";
		if(n<0) {
			return ;
		}
		String subString = s.substring(0, n);
		for(int i = 0;i<subString.length(); i++) {
			System.out.print(subString.charAt(i) + " ");
		}
		System.out.println("");
		RecursivePrint(n-1);
	}
	
	public static void main(String [] args) {
		RecursivePrint(5);
		
//		z y x w v 
//		z y x w 
//		z y x 
//		z y 
//		z 
		
	}

}
