public class Generic
{
    public static <El>void printArray(El[] elements)
    {
        for (El ele:elements)
        {
            System.out.println(ele);
        }
        System.out.println();
    }
    public static void main(String[] args)
    {
        Integer[] intArr = {1,2,3,4,5,6,7,8,9};
        System.out.println("Integer Array");
        printArray(intArr);
    }
}