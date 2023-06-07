using System;

class URI
{
    static void Main(string[] args)
    {
        String[] input;
        input = Console.ReadLine().Trim().Split(' ');
        double x1 = double.Parse(input[0]);
        double y1 = double.Parse(input[1]);

        input = Console.ReadLine().Trim().Split(' ');
        double x2 = double.Parse(input[0]);
        double y2 = double.Parse(input[1]);

        double D = Math.Sqrt(Math.Pow((x2 - x1), 2) + Math.Pow((y2 - y1), 2));
        Console.WriteLine($"{D:0.0000}");
    }
}