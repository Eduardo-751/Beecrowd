using System;

class URI
{
    static void Main(string[] args)
    {
        int max = int.Parse(Console.ReadLine());

        for (int i = 2; i <= max; i += 2)
        {
            Console.WriteLine($"{i}^2 = {i * i}");
        }
    }
}