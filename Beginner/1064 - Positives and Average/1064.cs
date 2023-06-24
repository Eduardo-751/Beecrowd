using System;

class URI
{
    static void Main(string[] args)
    {
        double aux, media = 0;
        int pos = 0;
        for (int i = 0; i < 6; i++)
        {
            aux = double.Parse(Console.ReadLine());
            if (aux > 0)
            {
                media += aux;
                pos++;
            }
        }
        media /= pos;
        Console.WriteLine($"{pos} valores positivos");
        Console.WriteLine(media.ToString("F1"));
    }
}