import java.util.*;

public class InsertionSort{
    public int[] array;

    public InsertionSort(int[] array){
        this.array = array;
    }

    public void sort(){ 
        int key;
        int i;
        for(int j = 1; j < array.length; j++){
            key = array[j];
            i = j - 1;
            while(i >= 0 && array[i] > key){
                array[i + 1] = array[i];
                i = i - 1;
            }
            array[i + 1] = key;
        }
    }

    public String toString(){
        String result = "[ ";
        for(int i = 0; i < this.array.length; i++){
            result = result + this.array[i] + "; ";
        }
        return result + "]" ;
    }
    
    public static void main(String args[]){

        int array[] = new int[10];
        Random random = new Random();
        for(int i = 0; i < 10; i++){
            array[i] = random.nextInt(100);
        }         

        InsertionSort orderedArray = new InsertionSort(array);
        System.out.println("Array:" + orderedArray.toString());
        orderedArray.sort();
 
        System.out.println("Sorted Array: " + orderedArray.toString());
    }
}