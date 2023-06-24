using System;

class URI
{
    static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        for (int i = 0; i < N; i++)
        {
            int X = int.Parse(Console.ReadLine());
            if (X == 0)
                Console.WriteLine("NULL");
            else
            {
                string evenOrOdd = X % 2 == 0 ? "EVEN" : "ODD";
                string positiveOrNegative = X > 0 ? "POSITIVE" : "NEGATIVE";
                Console.WriteLine($"{evenOrOdd} {positiveOrNegative}");
            }
        }
    }
}