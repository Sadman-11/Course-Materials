public class ForEach2D {
    public static void main(String[] args) {
        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        System.out.println("Matrix Elements:");
        for (int[] row : matrix) {   // outer loop for rows
            for (int val : row) {    // inner loop for columns
                System.out.print(val + " ");
            }
            System.out.println();
        }
    }
}


