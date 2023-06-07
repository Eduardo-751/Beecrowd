using System;

class URI
{
    static void Main(string[] args)
    {
        int X = int.Parse(Console.ReadLine());
        double Y = double.Parse(Console.ReadLine());

        double C = X/Y;
        Console.WriteLine($"{C:0.000} km/l");
    }
}