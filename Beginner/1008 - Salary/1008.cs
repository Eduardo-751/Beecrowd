using System;

class URI
{
    static void Main(string[] args)
    {
        int A = int.Parse(Console.ReadLine());
        int B = int.Parse(Console.ReadLine());
        double C = Double.Parse(Console.ReadLine());

        double salario = (B * C);

        Console.WriteLine($"NUMBER = {A}");
        Console.WriteLine($"SALARY = U$ {salario:0.00}");
    }
}