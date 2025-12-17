// Lab Exercise 7: Returning Objects from Methods

class Temperature {
    double celsius;
    
    Temperature(double celsius) {
        this.celsius = celsius;
    }
    
    Temperature toFahrenheit() {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        return new Temperature(fahrenheit);
    }
    
    void display() {
        System.out.println("Temperature: " + celsius);
    }
}

public class Exercise7_ReturningObjects {
    public static void main(String[] args) {
        Temperature celsiusTemp = new Temperature(25.0);
        Temperature fahrenheitTemp = celsiusTemp.toFahrenheit();
        
        celsiusTemp.display();
        fahrenheitTemp.display();
    }
}
