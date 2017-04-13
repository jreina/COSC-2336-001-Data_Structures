
public class Main5
{
    static class Person
    {
        public String name;

        public Person son;
        public Person daughter;

        public Person(String n)
        {
            name = n;

            son = null;
            daughter = null;
        }
    }

    public static void print_descendants(Person ref)
    {

        if (ref.son != null) {
            print_descendants(ref.son);
        }


        if (ref.daughter != null) {
            print_descendants(ref.daughter);
        }

        System.out.println("My Name is " + ref.name);
    }

    public static void main(String args[])
    {

        Person grandad = new Person("grandad");
        grandad.son = new Person("dad");
        grandad.son.son = new Person("me");
        grandad.son.daughter = new Person("sister");
        grandad.son.daughter.daughter = new Person("niece");
        grandad.daughter = new Person("aunt");
        grandad.daughter.son = new Person("cousin");

        print_descendants(grandad);
    }
}

