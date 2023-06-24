using System;

class URI
{
    static void Main(string[] args)
    {
        int i, a = 0, b = 0, c = 0, d = 0;
        int[] A = new int[5];

        for (i = 0; i < 5; i++)
        {
            A[i] = int.Parse(Console.ReadLine());
            if (A[i] % 2 == 0)
                a++;
            else
                b++;
            if (A[i] > 0)
                c++;
            else if (A[i] < 0)
                d++;
        }

        Console.WriteLine($"{a} valor(es) par(es)");
        Console.WriteLine($"{b} valor(es) impar(es)");
        Console.WriteLine($"{c} valor(es) positivo(s)");
        Console.WriteLine($"{d} valor(es) negativo(s)");
    }
}