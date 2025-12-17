public class ForEach1D {
    public static void main(String[] args) {
        int[] marks = {85, 90, 78, 92, 88};
        int sum = 0;

        for (int score : marks) {
            sum += score;
        }

        System.out.println("Total Marks: " + sum);
        System.out.println("Average Marks: " + (sum / marks.length));
    }
}



