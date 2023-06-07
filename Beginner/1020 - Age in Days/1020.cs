using System;

class URI
{
    static void Main(string[] args)
    {
        int day = int.Parse(Console.ReadLine());

        int year = day / 365;
        day %= 365;
        int month = day / 30;
        day %= 30;

        Console.WriteLine($"{year} ano(s)");
        Console.WriteLine($"{month} mes(es)");
        Console.WriteLine($"{day} dia(s)");
    }
}