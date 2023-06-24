using System;

class URI
{
    static void Main(string[] args)
    {
        int a = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());

        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        a += (Math.Abs(a) % 2) + 1;
        b -= (Math.Abs(b) % 2) + 1;

        int soma = 0;
        for (int i = a; i <= b; i += 2)
        {
            soma += i;
        }

        Console.WriteLine(soma);
    }
}