using System;

class URI
{
    static void Main(string[] args)
    {
        double A, B, C;
        double delta, R1, R2;

        string[] input = Console.ReadLine().Split();
        A = double.Parse(input[0]);
        B = double.Parse(input[1]);
        C = double.Parse(input[2]);

        delta = B * B - 4 * A * C;

        if (delta < 0 || A == 0)
        {
            Console.WriteLine("Impossivel calcular");
        }
        else
        {
            R1 = (-B + Math.Sqrt(delta)) / (2 * A);
            R2 = (-B - Math.Sqrt(delta)) / (2 * A);
            Console.WriteLine($"R1 = {R1:F5}");
            Console.WriteLine($"R2 = {R2:F5}");
        }
    }
}