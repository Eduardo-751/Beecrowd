using System;

class URI
{
    static void Main(string[] args)
    {

        double input = double.Parse(Console.ReadLine());
        double output;
        int increase;

        if (input <= 400)
            increase = 15;
        else if (input <= 800)
            increase = 12;
        else if (input <= 1200)
            increase = 10;
        else if (input <= 2000)
            increase = 7;
        else
            increase = 4;
        double salary = input * (1 + (increase / 100));
        Console.WriteLine($"Novo salario: {salary:0.00}");
        Console.WriteLine($"Reajuste ganho: {salary - input:0.00}");
        Console.WriteLine($"Em percentual: {increase} %");
    }
}