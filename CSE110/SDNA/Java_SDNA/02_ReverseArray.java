import java.util.Scanner;

public class ReverseArray {
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
        
        for(int i = 0; i < n / 2; i++) {
            int t = a[i];
            a[i] = a[n - 1 - i];
            a[n - 1 - i] = t;
        }
        
        System.out.println("The reversed array is :");
        for(int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }
        
        sc.close();
    }
}
