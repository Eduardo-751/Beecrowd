using System;

class URI
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split(' ');
        int start = int.Parse(input[0]);
        int end = int.Parse(input[0]);

        if (end < start)
            end += 24;
        Console.WriteLine($"O JOGO DUROU {end - start} HORA(S)");
    }
}