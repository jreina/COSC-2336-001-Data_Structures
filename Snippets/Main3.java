public class Main3
{
    public static int recursive_sum(int n)
    {
        int sum = 0;

        System.out.println("TOP:  n = " + n);
        

        if (n != 0)
            sum = recursive_sum(n - 1);


        System.out.println("BOTTOM:  n = " + n + ", sum = " + sum + 
                           ", returning: " + (n+sum));
        return (n + sum);
    }

    public static void main(String argv[])
    {
        int sum;

        sum = recursive_sum(2);

        System.out.println("MAIN:  sum = " + sum);
    }
}
