// Lab Exercise 2: Constructor Overloading — Modeling a Student

class Student {
    String name;
    int id;
    double cgpa;
    
    // Default constructor
    Student() {
        this.name = "Unknown";
        this.id = 0;
        this.cgpa = 0.0;
    }
    
    // Two-parameter constructor
    Student(String name, int id) {
        this.name = name;
        this.id = id;
        this.cgpa = 3.0;
    }
    
    // Three-parameter constructor
    Student(String name, int id, double cgpa) {
        this.name = name;
        this.id = id;
        this.cgpa = cgpa;
    }
    
    // Display method
    void display() {
        System.out.println(id + " - " + name + " - " + cgpa);
    }
}

public class Exercise2_ConstructorOverloading {
    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student("Rafi", 101);
        Student s3 = new Student("Nabila", 102, 3.85);
        
        s1.display();
        s2.display();
        s3.display();
    }
}
