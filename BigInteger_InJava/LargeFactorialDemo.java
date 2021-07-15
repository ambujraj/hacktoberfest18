import java.math.BigInteger;

public class LargeFactorialDemo {

    public static void main(String args[]) {

        System.out.printf("Factorial of 32 is %s %n", factorial(32));
        System.out.printf("Factorial of 0 is %s %n", factorial(0));
        System.out.printf("Factorial of 1 is %s %n", factorial(1));
        System.out.printf("Factorial of 5 is %s %n", factorial(5));
        System.out.printf("Factorial of 41 is %s %n", factorial(41));
        System.out.printf("Factorial of 45 is %s %n", factorial(45));

    }

    /*
     * Java method to calculate factorial of a large number
     * @return BigInteger factorial of given number
     */
    public static BigInteger factorial(int number) {
        BigInteger factorial = BigInteger.ONE;

        for (int i = number; i > 0; i--) {
            factorial = factorial.multiply(BigInteger.valueOf(i));
        }

        return factorial;
    }

}
