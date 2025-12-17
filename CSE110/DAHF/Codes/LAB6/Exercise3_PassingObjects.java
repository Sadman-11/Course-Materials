// Lab Exercise 3: Passing Objects as Method Parameters

class BankAccount {
    int accountNo;
    double balance;
    
    BankAccount(int accountNo, double balance) {
        this.accountNo = accountNo;
        this.balance = balance;
    }
    
    // Method to check if account numbers match
    boolean isSame(BankAccount other) {
        return this.accountNo == other.accountNo;
    }
}

public class Exercise3_PassingObjects {
    public static void main(String[] args) {
        BankAccount acc1 = new BankAccount(1001, 5000.0);
        BankAccount acc2 = new BankAccount(1002, 3000.0);
        BankAccount acc3 = new BankAccount(1001, 7000.0);
        
        System.out.println(acc1.isSame(acc2));
        System.out.println(acc1.isSame(acc3));
    }
}
