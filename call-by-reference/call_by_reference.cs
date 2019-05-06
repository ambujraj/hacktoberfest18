using System;

class Program
{
    static void Main()
    {
        int test = 0;

        Example1(val);
        Console.WriteLine(val); 
		// test has not changed, passed by value

        Example2(ref test);
        Console.WriteLine(test); 
		// Value is now 2, passed by reference with the key

        Example3(ref test);
        Console.WriteLine(test); 
		// Value is now 3; changed after being passed by reference
		
		// Also see the 'out' keyword on MSDN or Stack Overflow
    }

    static void Example1(int test)
    {
        test = 1;
    }

    static void Example2(ref int test)
    {
        test = 2;
    }

    static void Example3(out int test)
    {
        test = 3;
    }
}
