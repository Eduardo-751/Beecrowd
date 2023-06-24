using System;

class URI
{
    static void Main(string[] args)
    {
        int Maior = 0, position = 0;
        for (int i = 1; i <= 100; i++)
        {
            int N = int.Parse(Console.ReadLine());
            if (N > Maior)
            {
                Maior = N;
                position = i;
            }
        }
        Console.WriteLine(Maior);
        Console.WriteLine(position);
    }
}