using System;

class Program
{
    static void Main()
    {
        int test = 0;

        Example1(test);
        Console.WriteLine(test); 
		// test = 0;
		// test has not changed, passed by value

		Example2(test);
		Console.WriteLine(test);
		// test = 0;
		// test still has not changed
    }

    static void Example1(int test)
    {
        test = 1;
    }

    static void Example2(ref int test)
    {
        test = 2;
    }
}

