public class Hyundai implements Car {
    private String model = "Santro";
    private String year = "2015";

    @Override
    public void drive() {
        System.out.println("You are driving " + this);
    }

    public String toString() {
        return "Hyndai" + model + " ( " + year + ")";
    }
}