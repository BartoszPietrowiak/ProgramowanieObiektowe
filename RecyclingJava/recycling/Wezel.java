package recycling;
import java.util.*;
public class Wezel {
    //ArrayList<Wezel> polaczenia =  new ArrayList<> ();
    HashMap<Wezel,Boolean> polaczenia = new HashMap<>();
    //TreeMap<Wezel,Boolean> polaczenia = new TreeMap<Wezel,Boolean>(new NewComparator());
protected void dodajPolaczenie(Wezel w)
{
    //this.polaczenia.add(w);
    this.polaczenia.put(w,true);
}
    @Deprecated
    @Override
protected void finalize() throws Throwable {
System.out.println("Finalizowanie␣obiektu");
super.finalize ();
}
public static void main (String [] args ) {
    Scanner s = new Scanner (System.in) ;
    for ( int i = 0 ; i <= 100000; i++) {
        Wezel w1 = new Wezel();
        Wezel w2 = new Wezel();
        w1.dodajPolaczenie(w2);
        w2.dodajPolaczenie(w1);
    //new Wezel() ;
    }
    s.nextLine () ;
    s.close() ;
    }
}
    