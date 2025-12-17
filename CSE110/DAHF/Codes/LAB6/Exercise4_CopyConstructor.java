// Lab Exercise 4: Passing Objects to Constructors (Copy Book Info)

class Book {
    String title;
    double price;
    
    // Regular constructor
    Book(String title, double price) {
        this.title = title;
        this.price = price;
    }
    
    // Copy constructor
    Book(Book other) {
        this.title = other.title;
        this.price = other.price;
    }
    
    // Display method
    void display() {
        System.out.println(title + " - $" + price);
    }
}

public class Exercise4_CopyConstructor {
    public static void main(String[] args) {
        Book original = new Book("Java Programming", 950.0);
        Book copy = new Book(original);
        
        original.display();
        copy.display();
    }
}
