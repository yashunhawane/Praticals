interface LambdaExpression
{
    int add(int a,int b);
}
public class withorwithoutreturn
{
    public static void main(String[] args)
    {
        LambdaExpression ad1=(a,b)->(a+b);
        System.out.println(ad1.add(100,520));
        LambdaExpression ad2=(int a,int b)->
        { return (a+b);
        };
        System.out.println(ad2.add(350,140));
    }
}