package lab5;
class Test {
	int a, b;
	Test(int i, int j) {
		a = i;
		b = j;
	}
	void update(int i, int j) {
		i *= 2;
		j /= 2;
	}
}
class CallByValue {
	public static void main (String args[]) {
		Test ob = new Test(15, 20);
		ob.update(ob);
	}
}