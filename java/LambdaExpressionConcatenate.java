interface Stri
{
    String say();
}
interface St
{
    String sat();
}
public class LambdaExpressionConcatenate {
    public static void main(String[] args) {
        Stri st = () -> {
            return "\t Hello World";
        };
        St sta = () -> {
            return " \t Welcome User";
        };
        System.out.println(st.say() + sta.sat());
    }
}