import java.util.Scanner;

public class SumArray2D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Input the size of square matrix : ");
        int n = sc.nextInt();
        
        int[][] m = new int[n][n];
        
        System.out.println("Input elements in the first matrix :");
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                System.out.print("element - [" + i + "][" + j + "] : ");
                m[i][j] = sc.nextInt();
            }
        }
        
        int sum = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                sum += m[i][j];
            }
        }
        
        System.out.println("Sum of all elements in the 2D array is : " + sum);
        
        sc.close();
    }
}
