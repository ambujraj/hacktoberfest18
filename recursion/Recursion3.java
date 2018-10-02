/* Author: Aditya Agrawal(https://www.github.com/silly-soul)

import java.util.ArrayList;
import java.util.Scanner;

public class keypadCodes {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s1 = sc.next();
		ArrayList<String> s = getKPC(s1);
		System.out.println("No. of codes : " + s.size());
		System.out.println(s);
		PrintKeypadCode(s1, "");
		sc.close();
	}

	public static ArrayList<String> getKPC(String s) {
		if (s.length() == 0) {
			ArrayList<String> br = new ArrayList<>();
			br.add(s);
			return br;
		}
		char ch = s.charAt(0);
		String ros = s.substring(1);

		ArrayList<String> rr = getKPC(ros);
		ArrayList<String> mr = new ArrayList<>();
		String codes = getCode(ch);
		for (String rs : rr) {
			for (int i = 0; i < codes.length(); i++) {
				String ms = codes.charAt(i) + rs;
				mr.add(ms);
			}
		}
		return mr;
	}

	public static void PrintKeypadCode(String ques, String ans) {
		if (ques.length() == 0) {
			System.out.print(ans + ", ");
			return;
		}
		char ch = ques.charAt(0);
		String ros = ques.substring(1);
		String code = getCode(ch);
		for (int i = 0; i < code.length(); i++) {
			PrintKeypadCode(ros, ans + code.charAt(i));
		}
	}

	public static String getCode(char key) {
		if (key == '1') {
			return "abc";
		}
		if (key == '2') {
			return "def";
		}
		if (key == '3') {
			return "ghi";
		}
		if (key == '4') {
			return "jkl";
		}
		if (key == '5') {
			return "mno";
		}
		if (key == '6') {
			return "pqrs";
		}
		if (key == '7') {
			return "tuv";
		}
		if (key == '8') {
			return "wx";
		}
		if (key == '9') {
			return "yz";
		}
		if (key == '0') {
			return ".;";
		}
		return "";
	}

}
