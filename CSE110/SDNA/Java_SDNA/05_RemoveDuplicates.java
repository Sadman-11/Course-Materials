import java.util.Scanner;

public class RemoveDuplicates {
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
        
        int[] b = new int[n];
        int k = 0;
        
        for(int i = 0; i < n; i++) {
            boolean d = false;
            for(int j = 0; j < k; j++) {
                if(a[i] == b[j]) {
                    d = true;
                    break;
                }
            }
            if(!d) {
                b[k] = a[i];
                k++;
            }
        }
        
        System.out.println("Array after removing duplicates :");
        for(int i = 0; i < k; i++) {
            System.out.print(b[i] + " ");
        }
        
        sc.close();
    }
}
