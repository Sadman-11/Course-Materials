import java.util.Scanner;

public class SecondSmallest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Input the size of array : ");
        int n = sc.nextInt();
        
        int[] a = new int[n];
        
        System.out.println("Input " + n + " elements in the array (value must be <9999) :");
        for(int i = 0; i < n; i++) {
            System.out.print("element - " + i + " : ");
            a[i] = sc.nextInt();
        }
        
        int f = 9999;
        int s = 9999;
        
        for(int i = 0; i < n; i++) {
            if(a[i] < f) {
                s = f;
                f = a[i];
            } else if(a[i] < s && a[i] != f) {
                s = a[i];
            }
        }
        
        System.out.println("The Second smallest element in the array is : " + s);
        
        sc.close();
    }
}
