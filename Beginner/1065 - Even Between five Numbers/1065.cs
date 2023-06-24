using System;

class URI
{
    static void Main(string[] args)
    {
        int i, a = 0;
        int[] A = new int[5];

        for (i = 0; i < 5; i++)
        {
            A[i] = int.Parse(Console.ReadLine());
            if (A[i] % 2 == 0)
                a++;
        }

        Console.WriteLine($"{a} valores pares");
    }
}