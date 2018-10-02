import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.*;


public class Solution {	
	BufferedReader reader;
    StringTokenizer tokenizer;
    PrintWriter out;
    
	public void solve() throws IOException {				
		String S = reader.readLine().toLowerCase();
        boolean[] existed = new boolean[26];
		for (int i = 0; i < S.length(); i++) {
            if (S.charAt(i) != ' ') {
                existed[S.charAt(i)-'a'] = true;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (!existed[i]) {
                out.println("not pangram"); return;
            }
        }
        out.println("pangram");
	}
	
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		new Solution().run();
	}
	
	public void run() {
        try {
            reader = new BufferedReader(new InputStreamReader(System.in));
            tokenizer = null;
            out = new PrintWriter(System.out);
            solve();
            reader.close();
            out.close();
        } catch (Exception e) {
            e.printStackTrace();
            System.exit(1);
        }
    }

    int nextInt() throws IOException {
        return Integer.parseInt(nextToken());
    }

    long nextLong() throws IOException {
        return Long.parseLong(nextToken());
    }

    double nextDouble() throws IOException {
        return Double.parseDouble(nextToken());
    }

    String nextToken() throws IOException {
        while (tokenizer == null || !tokenizer.hasMoreTokens()) {
            tokenizer = new StringTokenizer(reader.readLine());
        }
        return tokenizer.nextToken();
    }

}