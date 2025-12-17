import java.util.Scanner;

public class SumArray1D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input the size of array : ");
        int size = sc.nextInt();
        
        int[] arr = new int[size];
        System.out.println("Input " + size + " elements in the array :");
        for (int i = 0; i < size; i++) {
            System.out.print("element - " + i + " : ");
            arr[i] = sc.nextInt();
        }

        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        
        System.out.println("Sum of all elements in the array is : " + sum);
        sc.close();
    }
}
