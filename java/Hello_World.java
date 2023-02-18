interface LambdaExpressions
{
    public void main();
}
public class Hello_World { public static void main(String args[])
{
    LambdaExpressions msg = () -> { System.out.println("\n\tHello World");
    };
    msg.main();
}
}