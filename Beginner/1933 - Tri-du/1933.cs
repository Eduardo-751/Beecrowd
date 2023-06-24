using System;

class URI
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split(' ');
        int A = int.Parse(input[0]);
        int B = int.Parse(input[1]);
        if (A > B)
            Console.WriteLine($"{A}");
        else
            Console.WriteLine($"{B}");
    }
}