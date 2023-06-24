using System;

class URI
{
    static void Main(string[] args)
    {
        string[] entrada;
        int d1, h1, m1, s1, d2, h2, m2, s2;

        d1 = int.Parse(Console.ReadLine().Trim().Split(' ')[1]);
        entrada = Console.ReadLine().Trim().Split(':');
        h1 = int.Parse(entrada[0].Trim());
        m1 = int.Parse(entrada[1].Trim());
        s1 = int.Parse(entrada[2].Trim());
        d2 = int.Parse(Console.ReadLine().Trim().Split(' ')[1]);
        entrada = Console.ReadLine().Trim().Split(':');
        h2 = int.Parse(entrada[0].Trim());
        m2 = int.Parse(entrada[1].Trim());
        s2 = int.Parse(entrada[2].Trim());

        int secTotal = ((24 * 60 * 60 * d2) + (60 * 60 * h2) + (60 * m2) + s2) - ((24 * 60 * 60 * d1) + (60 * 60 * h1) + (60 * m1) + s1);

        Console.WriteLine($"{secTotal / (24 * 60 * 60)} dia(s)");
        secTotal %= 24 * 60 * 60;
        Console.WriteLine($"{secTotal / (60 * 60)} hora(s)");
        secTotal %= 60 * 60;
        Console.WriteLine($"{secTotal / 60} minuto(s)");
        secTotal %= 60;
        Console.WriteLine($"{secTotal} segundo(s)");
    }
}