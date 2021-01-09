package wyjatki;

public class Customer {
    private String name;
    private String pesel;
    private int age;
    public Customer(){}
    public Customer(String s,String p , int w)
    {
        this.name=s;
        this.pesel=p;
        this.age=w;
    }
    public String getName()
    {
        return this.name;
    }
    public String getpesel()
    {
        return this.pesel;
    }
    public int getage()
    {
        return this.age;
    }
    @Override //ta adnotacja pokazuje że klasa podrzędna nadpisuje klasę nadrzędną
    public boolean equals(Object c)
    {
        final Customer other = (Customer) c;
        if (this.name==other.name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}
