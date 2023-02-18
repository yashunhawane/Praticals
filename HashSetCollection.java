import java.util.*;

public class HashSetCollection {
    public static void main(String[] args) {
        System.out.println("Collection-HashSet\n");
        /* Creating HashSet Collection */
        HashSet<String> carData = new HashSet<>();
        String car1 = "maybach";
        String car2 = "bmw x5";
        String car3 = "thar";
        String car4 = "range rover";
        /* Adding data to collection */
        carData.add(car1);
        carData.add(car2);
        carData.add(car3);
        carData.add(car4);
        System.out.println("Car Data");
        /* Creating iterator */
        Iterator iterator = carData.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next() + "");
        }
        System.out.println();
        /* Retrieving size of collection */
        int size = carData.size();
        if (carData.isEmpty()) {
            System.out.println("Collection is Empty");
        } else {
            System.out.println("Collection size:" + size);
        }
        System.out.println();
        /* Removing a specific data from the collection */
        carData.remove(car2);
        System.out.println("After removing[" + car2 + "]\n");
        System.out.println("Now collection data: ");
        iterator = carData.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next() + "");
        }
        System.out.println();
        size = carData.size();
        System.out.println("Collection size:" + size + "\n");
        /* Empty collection */
        carData.clear();
        size = carData.size();
        if (carData.isEmpty()) {
            System.out.println("Collection is empty");
        } else {
            System.out.println("Collection size:" + size);
        }
    }
}
