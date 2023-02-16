// Java program to Iterate the Elements
// in an ArrayList

// Importing java utility classes
import java.util.*;

// Main class
public class LinstIteration {

    public static void main(String args[]) {

        List<String> al = new ArrayList<>();

        al.add("Java");
        al.add("Programming");

        al.add(1, "For");

        for (int i = 0; i < al.size(); i++) {

            System.out.print(al.get(i) + " ");
        }

        System.out.println();

        for (String str : al)

            System.out.print(str + " ");
    }
}

