package nmitd.spring;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class RichPersonMain {
    public static void main(String[] args) throws Exception {
        ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext("nmitd/spring/beans.xml");
        Person person = context.getBean(Person.class);
        person.mySelf();
        context.close();
    }
}