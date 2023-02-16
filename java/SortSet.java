import java.util.Arrays;
import java.util.Collections;
import java.util.*;

public class SortSet {
    public static void main(String[] args) {

        HashSet<Integer> evenNumSet = new LinkedHashSet<>(
                Arrays.asList(4, 8, 6, 2, 12, 10, 62, 40, 36));

        System.out.println("Unsorted Set: " + evenNumSet);

        List<Integer> numList = new ArrayList<Integer>(evenNumSet);

        Collections.reverse(numList);

        evenNumSet = new LinkedHashSet<>(numList); // convert list to set

        System.out.println("reverse Set:" + evenNumSet);
    }
}
