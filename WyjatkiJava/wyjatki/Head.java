package wyjatki;

public class Head {
    public static void main(String args[]) throws AccountLoginFailedException,AccountNotFoundException,CustomerNotFoundException{    
        try{
        Bank b = new Bank();
        Customer c1= new Customer("Bartosz","123456789",43);
        Customer c2= new Customer("Arek","123123123",15);
        Customer c3= new Customer("Bogdan","321321321",19);
        Account a1= new Account(123123123,c1,123,"login");
        Account a2= new Account(123123,c2,123,"login");
        b.addAccount(a2);
        b.addAccount(a1);
        b.addCustomer(c1);
        b.addCustomer(c2);
        a1.login("login", 123);
        a1.login("logasdads",1231231);
        Customer c=b.findByName("Bartosz");
        c=b.findByName("Marek");
        Account a=b.findByNumber(123123123);
        a=b.findByNumber(13);
        }
        catch(CustomerNotFoundException e)
        {
            e.printStackTrace();
            e.fillInStackTrace();
            throw e;
        }
        catch(AccountLoginFailedException e)
        {
            e.printStackTrace();
        }
        catch(AccountNotFoundException e)
        {
            e.printStackTrace();
        }
    }
 
}
