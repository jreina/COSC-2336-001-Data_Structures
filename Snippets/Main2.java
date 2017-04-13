
public class Main2
{
    public static void recursion_test(int n)
    {
        System.out.println("TOP:  n = " + n);

        if (n != 0)
            recursion_test(n - 1);

        System.out.println("BOT:  n = " + n);
    }

    public static void main(String argv[])
    {
        recursion_test(2);
    }
}
