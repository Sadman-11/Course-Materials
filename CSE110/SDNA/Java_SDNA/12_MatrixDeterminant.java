import java.util.Scanner;

public class MatrixDeterminant {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int[][] m = new int[2][2];
        
        System.out.println("Input elements in the first matrix :");
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                System.out.print("element - [" + i + "][" + j + "] : ");
                m[i][j] = sc.nextInt();
            }
        }
        
        int d = m[0][0] * m[1][1] - m[0][1] * m[1][0];
        
        System.out.println("The Determinant is : " + d);
        
        sc.close();
    }
}
