import java.util.Scanner;

public class SearchElement {
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
        
        System.out.print("Enter the element to search : ");
        int s = sc.nextInt();
        
        int f = -1;
        for(int i = 0; i < n; i++) {
            if(a[i] == s) {
                f = i;
                break;
            }
        }
        
        if(f != -1) {
            System.out.println("Element found at index : " + f);
        } else {
            System.out.println("Element not found");
        }
        
        sc.close();
    }
}
