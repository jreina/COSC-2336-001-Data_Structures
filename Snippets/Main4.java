public class Main4
{
    public static void recursive_meth(String str)
    {

System.out.println("TOP of recursive_meth, str = [" + str + "]");
        if (str.length() > 0) {
            recursive_meth(str.substring(1));
            System.out.print(str.charAt(0));
        }

        return;
    }

    public static void main(String argv[])
    {
        recursive_meth("abc");

        System.out.println();
    }
}
