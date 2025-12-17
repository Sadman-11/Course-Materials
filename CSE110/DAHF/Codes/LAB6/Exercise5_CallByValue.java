// Lab Exercise 5: Call by Value (No Change)

class Calculator {
    void increment(int x) {
        x = x + 1;
        System.out.println("Inside method: " + x);
    }
}

public class Exercise5_CallByValue {
    public static void main(String[] args) {
        Calculator calc = new Calculator();
        int x = 10;
        
        calc.increment(x);
        System.out.println("After call: " + x);
    }
}
