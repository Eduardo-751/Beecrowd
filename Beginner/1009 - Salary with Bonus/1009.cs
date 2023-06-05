using System;

class URI
{
    static void Main(string[] args)
    {
        String name = Console.ReadLine();
        double A = Double.Parse(Console.ReadLine());
        double B = Double.Parse(Console.ReadLine());

        double salario = A + (B * 0.15);

        Console.WriteLine($"TOTAL = R$ {salario:0.00}");
    }
}