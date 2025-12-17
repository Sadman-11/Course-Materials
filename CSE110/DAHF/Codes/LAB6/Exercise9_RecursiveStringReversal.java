// Lab Exercise 9: Recursive String Reversal

class StringReverser {
    void reverse(String s) {
        if (s.length() == 0) {
            return;
        }
        reverse(s.substring(1));
        System.out.print(s.charAt(0));
    }
}

public class Exercise9_RecursiveStringReversal {
    public static void main(String[] args) {
        StringReverser reverser = new StringReverser();
        reverser.reverse("JAVA");
        System.out.println();
    }
}
