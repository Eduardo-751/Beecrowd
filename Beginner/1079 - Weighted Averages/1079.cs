using System;

class URI
{
    static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        for (int i = 0; i < N; i++)
        {
            string[] input = Console.ReadLine().Split(' ');

            double ac1 = double.Parse(input[0]);
            double ac2 = double.Parse(input[1]);
            double af = double.Parse(input[2]);

            Console.WriteLine($"{ac1 * 0.2 + ac2 * 0.3 + af * 0.5:0.0}");
        }
    }
}