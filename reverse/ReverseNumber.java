import java.util.Scanner;

public class ReverseNumber{

    //Function to reverse the given number
    public static int reverse(int num){
        int ans = 0;
        int last = 0;
        while(num!=0){
            last = num%10;
            ans = ans*10 + last;
            num /= 10;
        }
        return ans;
    }

    public static void main(String []args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int number = scan.nextInt();
        int answer = reverse(number);
        System.out.println("The reversed number of " + number + " is " + answer);
    }
}