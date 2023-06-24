using System;

class URI
{
    static void Main(string[] args)
    {
        int n;
        n = int.Parse(Console.ReadLine());
        n += 1 - (n % 2);
        for (int i = n; i <= n + 10; i += 2)
        {
            Console.WriteLine(i);
        }
    }
}