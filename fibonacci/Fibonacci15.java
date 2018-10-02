package java;

import org.junit.Test;

import static org.junit.Assert.*;

/**
 * The java.Fibonacci sequence is a sequence of numbers in which each number after the first two is the sum of the two preceding ones.
 * 1, 1, 2, 3, 5, 8, 13, ...
 */
public final class Fibonacci {

    /**
     * Prevent instantiating.
     */
    private Fibonacci(){
    }

    /**
     * A recursive method that calculates and returns the nth fibonacci number.
     *
     * @return the nth fibonacci number.
     */
    public static int fibonacci(int n) {
        if (n <= 1) {
            return n;
        }

        return fibonacci(n - 1) + fibonacci(n - 2);
    }

}

