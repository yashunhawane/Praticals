public class Suzuki implements Car {
    private String model = "Dezire";
    private String year = "2017";

    @Override
    public void drive() {
        System.out.println("You are driving " + this);
    }

    public String toString() {
        return "Hyndai" + model + " ( " + year + ")";
    }
}
