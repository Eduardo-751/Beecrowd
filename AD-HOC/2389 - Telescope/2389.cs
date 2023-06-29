using System;

class URI
{
    static void Main(string[] args)
    {
        int A, N, F, views = 0;

        A = int.Parse(Console.ReadLine());
        N = int.Parse(Console.ReadLine());

        for (int i = 0; i < N; i++)
        {
            F = int.Parse(Console.ReadLine());
            if (F * A >= 40000000)
                views++;
        }
        Console.WriteLine(views);
    }
}