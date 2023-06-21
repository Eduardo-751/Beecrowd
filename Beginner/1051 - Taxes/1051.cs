using System;

class URI
{
    static void Main(string[] args)
    {

        double salary = double.Parse(Console.ReadLine());
        double taxes = 0;

        if (salary > 4500)
        {
            taxes += (taxes - 4500) * 0.28 + (1500 * 0.18) + (1000 * 0.08);
        }
        else if (salary > 3000)
        {
            taxes += (taxes - 3000) * 0.18 + (1000 * 0.08);
        }
        else if (salary > 2000)
        {
            taxes += (taxes - 2000) * 0.08;

        }
        else
            Console.WriteLine("Isento");

        if (taxes != 0)
        {
            Console.WriteLine($"R$ {taxes:0.00}");
        }

    }
}