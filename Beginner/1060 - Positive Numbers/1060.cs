using System;

class URI
{
    static void Main(string[] args)
    {

        int positivos = 0;

        for (int i = 0; i < 6; i++)
        {
            double valor = double.Parse(Console.ReadLine());
            if (valor > 0)
            {
                positivos++;
            }
        }

        Console.WriteLine($"{positivos} valores positivos");

    }
}