import java.util.*;

public class TreeSetCollection {
    public static void main(String[] args) {
        System.out.println("Collection-TreeSet\n");
        /* Creating TreeSet Collection */
        TreeSet<String> tree = new TreeSet<>();
        tree.add("Sunday");
        tree.add("Monday");
        tree.add("Tuesday");
        tree.add("Wednesday");
        tree.add("Thursday");
        tree.add("Friday");
        tree.add("Saturday");
        /* Creating iterator */
        Iterator iterator = tree.iterator();
        System.out.println("Tree set data: ");
        while (iterator.hasNext()) {
            System.out.println(iterator.next() + "");
        }
        System.out.println();
        if (tree.isEmpty()) {
            System.out.println("Tree Set is Empty");
        } else {
            System.out.println("Tree Set size:" + tree.size());
        }
        System.out.println("First Data: " + tree.first());
        System.out.println("Last Data: " + tree.last());
        /* Removing a specific data from the collection */
        if (tree.remove("Sunday")) {
            System.out.println("Data is removed from tree set");
        } else {
            System.out.println("Data doesn't exist!");
        }
        System.out.println("Now the tree set contain: ");
        iterator = tree.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next() + " ");
        }

        System.out.println();
        System.out.println("Now the size of tree set:" + tree.size());
        /* Empty collection */
        tree.clear();
        if (tree.isEmpty()) {
            System.out.println("Tree Set is empty");
        } else {
            System.out.println("Tree Set size:" + tree.size());
        }
    }
}
