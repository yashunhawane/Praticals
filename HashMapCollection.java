import java.util.*;
public class HashMapCollection {
    public static void main(String[] args){
        /*Creating a hash map */
        HashMap hm=new HashMap();
        /*Adding elements to the map */
        hm.put("yash", 2555.20);
        hm.put("sum", 4443.86);
        hm.put("dar", 7798.63);
        hm.put("rah", -8862.39);
        hm.put("sid", -2291.13);
        /*Retrieving a set of the entries */
        Set set=hm.entrySet();
        System.out.println("Before update: ");
        /*Retrieving a iterator */
        Iterator i=set.iterator();
        /*Displaying elements */
        while(i.hasNext()){
            Map.Entry me=(Map.Entry)i.next();
            System.out.println(me.getKey()+": ");
            System.out.println(me.getValue());
        }
        System.out.println();
        /*Depositing 1000 into Bunny account */
        double balance=((Double)hm.get("rah"));
        hm.put("rah", balance + 200);
        System.out.println("rah's new balance: "+hm.get("rah"));
        System.out.println();
        System.out.println("After update: ");
        /*Diplaying elements after update */
        i=set.iterator();
        while(i.hasNext()){
            Map.Entry me=(Map.Entry)i.next();
            System.out.println(me.getKey()+": ");
            System.out.println(me.getValue());
        }
    }
}
