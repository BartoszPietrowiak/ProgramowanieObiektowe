package wyjatki;
import java.util.ArrayList;
import java.util.Objects;

public class Bank implements SearchAccount, SearchCustomer{
    ArrayList<Customer> customers = new ArrayList<Customer>();
    ArrayList<Account> accounts = new ArrayList<Account>();
    public Bank(){}
    public void addAccount(Account a)
    {
        accounts.add(a);
    }
    public void addCustomer(Customer a)
    {
        customers.add(a);
    }
    @Override
    public Customer findByName(String name) throws CustomerNotFoundException
    {
        for(int i=0;i<customers.size();i++)
        {
            if(Objects.equals(name,customers.get(i).getName()))
            {
                System.out.println("Znaleziono klienta!");
                return customers.get(i);
            }
        }
        throw new CustomerNotFoundException("Nie znaleziono klienta!",name);
    }
    @Override
    public Account findByNumber(int num) throws AccountNotFoundException
    {
        for(int i=0;i<accounts.size();i++)
        {
            if(num==accounts.get(i).getNumber())
            {
                System.out.println("Znaleziono konto!");
                return accounts.get(i);
            }
        }
        throw new AccountNotFoundException("Nie znaleziono konta!",num);
    }
    @Override
    public ArrayList<Account> findallCustomerAccounts(Customer cust) throws AccountNotFoundException
    {
        ArrayList<Account> accounts2= new ArrayList<Account>();
        for(int i=0;i<accounts.size();i++)
        {
            if(cust==accounts.get(i).getCustomer())
            {
                accounts.add(accounts.get(i));
            }
        }
        if(accounts2.size()==0)
        {
            throw new AccountNotFoundException("Nie znaleziono konta!",cust.getName());
        }
        else
        {
            return accounts2;
        }
    }


    
}
