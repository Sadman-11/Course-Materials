public class ForEachRagged {
    public static void main(String[] args) {
        int[][] raggedArray = {
            {1, 2},
            {3, 4, 5},
            {6}
        };

        System.out.println("Jagged Array Elements:");
        for (int[] row : raggedArray) {
            for (int element : row) {
                System.out.print(element + " ");
            }
            System.out.println();
        }
    }
}

