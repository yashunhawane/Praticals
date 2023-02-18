interface LambdaExpreions
{
    public void main(String str);
}
public class SingleParamLambda
{
    public static void main(String args[])
    {
        LambdaExpression msg = (str) ->
        {
            System.out.println(str);
        };
        msg.main("Welcome to NMITD");
    }
}