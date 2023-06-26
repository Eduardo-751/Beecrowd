using System;

class URI
{
    static void Main(string[] args)
    {

        string[] input = Console.ReadLine().Split(' ');
        int C = int.Parse(input[0]);
        int P = int.Parse(input[1]);
        int F = int.Parse(input[2]);

        if (C * F <= P)
            Console.WriteLine("S");
        else
            Console.WriteLine("N");
    }
}