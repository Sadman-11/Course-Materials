// Lab Exercise 10: Access Control and Encapsulation

class Account {
    private double balance;
    
    Account(double initialBalance) {
        this.balance = initialBalance;
    }
    
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
    
    public void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
        }
    }
    
    public void showBalance() {
        System.out.println("Current Balance: " + balance);
    }
}

public class Exercise10_AccessControl {
    public static void main(String[] args) {
        Account acc = new Account(1000.0);
        acc.deposit(500.0);
        acc.withdraw(200.0);
        acc.showBalance();
    }
}
