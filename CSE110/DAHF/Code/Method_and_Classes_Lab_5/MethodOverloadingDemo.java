package lab5;
class MethodOverloading {
	public int add(int a, int b) {
		return a + b;
	}

	public int add(int a, int b, int c) {
		return a + b + c;
	}

	public double add(double a, double b) {
		return a + b;
	}
}

public class MethodOverloadingDemo {
	public static void main(String[] args) {
		MethodOverloading moObj = new MethodOverloading();
		
		int sum1 = moObj.add(5, 10);
		System.out.println("Sum of two integers: " + sum1);
		
		int sum2 = moObj.add(5, 10, 15);
		System.out.println("Sum of two integers: " + sum2);
		
		double sum3 = moObj.add(2, 3.5);
		System.out.println("Sum of two integers: " + sum3);
	}
}