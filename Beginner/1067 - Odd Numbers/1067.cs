using System;

class URI
{
    static void Main(string[] args)
    {
        int n;
        n = int.Parse(Console.ReadLine());

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
                Console.WriteLine(i);
        }
    }
}