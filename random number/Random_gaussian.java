
import java.util.*;

public class RandomDemo {
   public static void main( String args[] ) {
      
      // create random object
      Random randomno = new Random();
    
      // check next Gaussian value  
      System.out.println("Next Gaussian value: " + randomno.nextGaussian());
   }      
}