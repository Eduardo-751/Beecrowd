using System;

class URI
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split(' ');
        int C = int.Parse(input[0]);
        int N = int.Parse(input[1]);

        Console.WriteLine($"{C % N}");
    }
}