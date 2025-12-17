import java.util.Scanner;

public class MatrixMultiplication {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Input the rows and columns of first matrix : ");
        int r1 = sc.nextInt();
        int c1 = sc.nextInt();
        
        System.out.print("Input the rows and columns of second matrix : ");
        int r2 = sc.nextInt();
        int c2 = sc.nextInt();
        
        int[][] a = new int[r1][c1];
        int[][] b = new int[r2][c2];
        int[][] c = new int[r1][c2];
        
        System.out.println("Input elements in the first matrix :");
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++) {
                System.out.print("element - [" + i + "][" + j + "] : ");
                a[i][j] = sc.nextInt();
            }
        }
        
        System.out.println("Input elements in the second matrix :");
        for(int i = 0; i < r2; i++) {
            for(int j = 0; j < c2; j++) {
                System.out.print("element - [" + i + "][" + j + "] : ");
                b[i][j] = sc.nextInt();
            }
        }
        
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++) {
                c[i][j] = 0;
                for(int k = 0; k < c1; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        
        System.out.println("The First matrix is :");
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++) {
                System.out.print(a[i][j] + " ");
            }
            System.out.println();
        }
        
        System.out.println("The Second matrix is :");
        for(int i = 0; i < r2; i++) {
            for(int j = 0; j < c2; j++) {
                System.out.print(b[i][j] + " ");
            }
            System.out.println();
        }
        
        System.out.println("The multiplication of two matrix is :");
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++) {
                System.out.print(c[i][j] + " ");
            }
            System.out.println();
        }
        
        sc.close();
    }
}
