import java.util.*;

public class HashMapAdd_Remove {
    public static void main(String args[]) {
        HashMap<Integer, String> map = new HashMap<Integer, String>();
        map.put(0, "Apple");
        map.put(1, "Mango");
        map.put(2, "Pear");
        map.put(3, "Lichi");

        HashMap<Integer, String> map2 = new HashMap<Integer, String>();
        map2.put(4, "Banana");
        map2.put(5, "Orange");

        map2.putAll(map);

        System.out.println("HashMap 2 contains: " + map2);
        System.out.println("Initial list of elements: " + map);

        String value = map.get(1);
        System.out.println("Value at index 1: " + value);

        System.out.println("key/value: " + map.entrySet());

        map.remove(0);
        System.out.println("Updated list of elements: " + map);

        map.remove(1);
        System.out.println("Updated list of elements: " + map);

        map.remove(2, "Pear");
        System.out.println("Updated list of elements: " + map);

    }
}
