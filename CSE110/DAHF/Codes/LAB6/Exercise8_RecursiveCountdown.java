// Lab Exercise 8: Recursive Countdown

class Countdown {
    void printDown(int n) {
        if (n == 0) {
            return;
        }
        System.out.println(n);
        printDown(n - 1);
    }
}

public class Exercise8_RecursiveCountdown {
    public static void main(String[] args) {
        Countdown counter = new Countdown();
        counter.printDown(5);
    }
}
