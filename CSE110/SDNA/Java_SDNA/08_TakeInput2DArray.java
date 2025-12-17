import java.util.Scanner;

public class TakeInput2DArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input the number of rows : ");
        int rows = sc.nextInt();
        System.out.print("Input the number of columns : ");
        int cols = sc.nextInt();
        int[][] arr = new int[rows][cols];
        
        System.out.println("Input elements in the 2D array :");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print("element - [" + i + "][" + j + "] : ");
                arr[i][j] = sc.nextInt();
            }
        }
        
        System.out.println("\nThe 2D array is :");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}
