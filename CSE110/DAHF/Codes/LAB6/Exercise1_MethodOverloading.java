class ShapeArea {
    double area(double radius) {
        return Math.PI * radius * radius;
    }
    
    double area(double length, double width) {
        return length * width;
    }
    
    double area(int base, int height) {
        return 0.5 * base * height;
    }
}

public class Exercise1_MethodOverloading {
    public static void main(String[] args) {
        ShapeArea shape = new ShapeArea();
        
        System.out.println("Circle area: " + String.format("%.2f", shape.area(5.0)));
        System.out.println("Rectangle area: " + shape.area(2.7, 5.0));
        System.out.println("Triangle area: " + shape.area(10, 4));
    }
}
