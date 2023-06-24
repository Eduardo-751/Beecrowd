using System;

class URI
{
    static void Main(string[] args)
    {
        int casos = int.Parse(Console.ReadLine());
        int inCount = 0;

        for (int i = 0; i < casos; i++)
        {
            int aux = int.Parse(Console.ReadLine());

            if (aux >= 10 && aux <= 20)
                inCount++;
        }

        Console.WriteLine($"{inCount} in");
        Console.WriteLine($"{casos - inCount} out");
    }
}