import java.util.*;
public class SortedMapCollection {
    public static void main(String[] args){
        SortedMap map=new TreeMap();
        map.put("23", "yash");
        map.put("18", "sum");
        map.put("72", "raj");
        map.put("55", "dar");
        map.put("24", "rah");
        System.out.println("The lowest key value [age] is: "+map.firstKey()+"\n");
        System.out.println("The highest key value [age] is: "+map.lastKey()+"\n");
        System.out.println("All key value is: "+map+"\n");
        System.out.println("The head map is: "+map.headMap("4"+"\n"));
        System.out.println("The tail map is: "+map.tailMap("4"+"\n"));
        Iterator iterator=map.keySet().iterator();
        while(iterator.hasNext()){
            Object key=iterator.next();
            System.out.println("Age: "+key+" - Name: "+map.get(key));
        }
    }
}
