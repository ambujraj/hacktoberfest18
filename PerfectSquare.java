public class PerfectSquare {

  public boolean isPerfectSquare(long n) {
    long l = (long) Math.sqrt(n);
    return l * l == n;
  }
}
