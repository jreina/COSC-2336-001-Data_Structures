
public class Main1
{
    static int n;

    public static void recursion_test()
    {
        System.out.println("TOP:  n = " + n);

        if (n != 0) {
            n--;
            recursion_test();
        }

        System.out.println("BOT:  n = " + n);
    }

    public static void main(String argv[])
    {
        n = 2;
        recursion_test();
    }
}
