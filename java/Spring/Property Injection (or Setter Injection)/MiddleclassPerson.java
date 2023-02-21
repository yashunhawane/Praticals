public class MiddleclassPerson implements Person {
    private String fname;
    private String lname;
    private Car myFirstCar;

    public MiddleclassPerson(String fname, String lname) {
        this.fname = fname;
        this.lname = lname;
    }

    public void setMyFirstCar(Car aCar) {
        myFirstCar = aCar;
    }

    @Override
    public void aboutMe() {
        System.out.println(
                "Myself " + fname + " " + lname + " am a Middle Class Person. My First Car is : " + myFirstCar);
    }
}