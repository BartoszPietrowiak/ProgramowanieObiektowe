package wyjatki;

public class Account {
    private int accountNumber;
    private Customer owner;
    private double balance;
    private int password;
    private String login;
    public Account(){}
    public Account(int n, Customer c, int p, String l)
    {
        this.accountNumber=n;
        this.owner=c;
        this.password=p;
        this.login=l;
    }
    public void login(String l, int p) throws AccountLoginFailedException
    {
        if (login==l &&password==p)
        {
            System.out.println("Poprawnie zalogowano!");
        }
        else
        {
            throw new AccountLoginFailedException("Nie zalogowano!",l,p);
        }
    }
    public Customer getCustomer()
    {
        return owner;
    }
    public int getNumber()
    {
        return accountNumber;
    }
    public double getBalance()
    {
        return balance;
    }
    public double withdraw(double amount)
    {
        balance=balance-amount;
        return balance;
    }
}
