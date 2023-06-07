using System;

class URI
{
    public static void Main(string[] args)
    {
        int i, a, b, c, d = 0;
        while (int.TryParse(Console.ReadLine(), out i))
        {
            d = 0;
            for (a = 1; a <= i; a = a + 2)
            {
                for (c = i / 2 - d; c > 0; c--)
                    Console.Write(" ");

                for (b = 1; b <= a; b++)
                    Console.Write("*");

                Console.WriteLine();
                d++;
            }
            d = 0;
            for (a = 1; a <= 3; a = a + 2)
            {
                for (c = i / 2 - d; c > 0; c--)
                    Console.Write(" ");

                for (b = 1; b <= a; b++)
                    Console.Write("*");

                Console.WriteLine();
                d++;
            }
            Console.WriteLine();
        }
    }
}