// Lab Exercise 6: Call by Reference (Modifying Object)

class Product {
    String name;
    double price;
    
    Product(String name, double price) {
        this.name = name;
        this.price = price;
    }
    
    void updatePrice(Product p) {
        p.price = p.price + 50;
    }
    
    void display() {
        System.out.println("Updated price: " + price);
    }
}

public class Exercise6_CallByReference {
    public static void main(String[] args) {
        Product p = new Product("Laptop", 850.0);
        p.updatePrice(p);
        p.display();
    }
}
