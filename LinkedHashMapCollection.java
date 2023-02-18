import java.util.*;

public class LinkedHashMapCollection {
    /**
     * @param args
     */
    public static void main(String[] args) {
        System.out.println("Collection-LinkedHashMap\n");
        LinkedHashMap carData = new LinkedHashMap();
        String car1 = "maybach";
        String car2 = "bmw x5";
        String car3 = "thar";
        String car4 = "range rover";
        carData.put(car1, 500000);
        carData.put(car2, 1000000);
        carData.put(car3, 850000);
        carData.put(car4, 1500000);
        System.out.println("Car Data: ");
        Iterator iterator = carData.keySet().iterator();
        Object obj;
        while (iterator.hasNext()) {
            obj = iterator.next();
            System.out.println(obj + ": " + carData.get(obj));
        }
        System.out.println();
        int size = carData.size();
        if (carData.isEmpty()) {
            System.out.println("Collection is Empty");
        } else {
            System.out.println("Collection size:" + size);
        }
        System.out.println();
        carData.remove(car2);
        System.out.println("After removing[" + car2 + "]\n");
        System.out.println("Now collection data: ");
        iterator = carData.keySet().iterator();
        while (iterator.hasNext()) {
            obj = iterator.next();
            System.out.println(obj + ": " + carData.get(obj));
        }
        System.out.println();
        size = carData.size();
        System.out.println("Collection size:" + size + "\n");
        carData.clear();
        size = carData.size();
        if (carData.isEmpty()) {
            System.out.println("Collection is empty");
        } else {
            System.out.println("Collection size:" + size);
        }
    }

}
