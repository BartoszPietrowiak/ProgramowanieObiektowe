package wyjatki;
import java.util.ArrayList;

public class AccountLoginFailedException extends Exception {
    static final long serialVersionUID = 1L;
    private int password;
    private String login;
    public AccountLoginFailedException(){}
    public AccountLoginFailedException(String errorMsg, String s, int passwd)
    {
        super(errorMsg);
        login=s;
        password=passwd;
    }
    public int getPassword()
    {
        return this.password;
    }
    public String getLogin()
    {
        return this.login;
    }
}
interface SearchCustomer{
    Customer findByName(String name) throws CustomerNotFoundException;
}
interface SearchAccount{
    Account findByNumber(int number) throws AccountNotFoundException;
    ArrayList<Account> findallCustomerAccounts(Customer cust) throws AccountNotFoundException;
}
