import java.util.List;

public class RichPerson implements Person {
    private String firstName;
    private String lastName;
    private List<String> carsOwned;

    public RichPerson(String firstName, String lastName, List<String> carsOwned) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.carsOwned = carsOwned;
    }

    public void mySelf() {
        System.out.println("Myself " + firstName + " " + lastName + " am a rich person because I own all these cars:");
        for (String myCar : carsOwned) {
            System.out.println("-Car:" + myCar);
        }
    }
}