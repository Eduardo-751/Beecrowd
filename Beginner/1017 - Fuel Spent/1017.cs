using System;

class URI
{
    static void Main(string[] args)
    {
        int horas = int.Parse(Console.ReadLine());
        int kmh = int.Parse(Console.ReadLine());

        int distancia = horas * kmh;
        double litros = distancia / 12.0;

        Console.WriteLine($"{litros:0.000}");
    }
}