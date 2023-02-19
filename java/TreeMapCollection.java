import java.util.*;
public class TreeMapCollection {
    public static void main(String[] args){
        System.out.println("Collection-TreeMap\n");
        TreeMap<String, Integer>tMap=new TreeMap<>();
        tMap.put("yash", 23);
        tMap.put("rah", 23);
        tMap.put("sum", 18);
        tMap.put("dar", 26);
        tMap.put("new", 28);
        System.out.println("Retrieving the keys and values: ");
        Iterator it=tMap.keySet().iterator();
        Object obj;
        while(it.hasNext()){
            obj=it.next();
            System.out.println(obj+" "+tMap.get(obj));
        }    
        System.out.println("\nRetrieving the Value (age) of key[new]: "+ tMap.get("new")+"\n");
        System.out.println("Retrieving the First Key: "+ tMap.firstKey()+ " - Age[Value]: "+ tMap.get(tMap.firstKey())+"\n"); 
        System.out.println("Retrieving the Last Key: "+ tMap.lastKey()+ " - Age[Value]: "+ tMap.get(tMap.lastKey())+"\n"); 
        System.out.println("Removing the first data: "+tMap.remove(tMap.firstKey()));
        it=tMap.keySet().iterator();
        while(it.hasNext()){
            obj=it.next();
            System.out.println(obj+": "+tMap.get(obj));
        }
        System.out.println("Removing the last data: "+tMap.remove(tMap.lastKey()));
        it=tMap.keySet().iterator();
        while(it.hasNext()){
            obj=it.next();
            System.out.println(obj+": "+tMap.get(obj));
        }
    }
 
}

