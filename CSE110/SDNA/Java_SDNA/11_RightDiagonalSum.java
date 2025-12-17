import java.util.Scanner;

public class RightDiagonalSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Input the size of the square matrix : ");
        int n = sc.nextInt();
        
        int[][] m = new int[n][n];
        
        System.out.println("Input elements in the first matrix :");
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                System.out.print("element - [" + i + "][" + j + "] : ");
                m[i][j] = sc.nextInt();
            }
        }
        
        System.out.println("The matrix is :");
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                System.out.print(m[i][j] + " ");
            }
            System.out.println();
        }
        
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += m[i][n - 1 - i];
        }
        
        System.out.println("Addition of the right Diagonal elements is :" + sum);
        
        sc.close();
    }
}
