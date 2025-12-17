import java.util.Scanner;

public class MaximumElement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Input the size of array : ");
        int n = sc.nextInt();
        
        int[] a = new int[n];
        
        System.out.println("Input " + n + " elements in the array :");
        for(int i = 0; i < n; i++) {
            System.out.print("element - " + i + " : ");
            a[i] = sc.nextInt();
        }
        
        int max = a[0];
        for(int i = 1; i < n; i++) {
            if(a[i] > max) {
                max = a[i];
            }
        }
        
        System.out.println("The maximum element in the array is : " + max);
        
        sc.close();
    }
}
