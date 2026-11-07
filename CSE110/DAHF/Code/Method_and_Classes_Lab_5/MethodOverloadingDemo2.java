package lab5;
class MethodOverloading {
	public int add(int a, int b) {
		System.out.println("add() version 1");
		return a + b;
	}

	public double add(double a, double b) {
		System.out.println("add() version 2");
		return a + b;
	}
}

public class MethodOverloadingDemo2 {
	public static void main(String[] args) {
		MethodOverloading moObj = new MethodOverloading();

		int sum1 = moObj.add(5, 10);
		System.out.println("Sum of two integers: " + sum1);

		double sum2 = moObj.add(2.5, 3.5);
		System.out.println("Sum of two doubles: " + sum2);

		double sum3 = moObj.add(2, 3.5);
		System.out.println("Sum of int and double: " + sum3);
	}
}

