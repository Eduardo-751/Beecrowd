using System;

class URI
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split(' ');

        int[] list = { int.Parse(input[0]), int.Parse(input[1]), int.Parse(input[2]) };
        Array.Sort(list);

        foreach (int n in list)
        {
            Console.WriteLine(n);
        }
        Console.WriteLine();

        Console.WriteLine(input[0]);
        Console.WriteLine(input[1]);
        Console.WriteLine(input[2]);
    }
}