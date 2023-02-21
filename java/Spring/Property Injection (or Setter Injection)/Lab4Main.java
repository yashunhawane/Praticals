import org.springframework.context.support.ClassPathXmlApplicationContext;
public class Lab4Main {
public static void main(String[] args) { ClassPathXmlApplicationContext appCtx = new ClassPathXmlApplicationContext("lab4beans.xml");
Person p = appCtx.getBean(MiddleclassPerson.class);
p.aboutMe();
appCtx.close();
// MiddleclassPerson mPerson = new MiddleclassPerson("Saurabh", "Hatkar");
// Car myCar = new Hyundai();
// mPerson.setMyFirstCar(myCar);
// mPerson.aboutMe();
// myCar.drive();
}
}