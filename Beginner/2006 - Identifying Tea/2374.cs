using System;

class URI
{
    static void Main(string[] args)
    {
        int T = int.Parse(Console.ReadLine());
        string[] input = Console.ReadLine().Split(' ');
        int[] contestant  = Array.ConvertAll(input , int.Parse);

        int R = Array.FindAll(contestant, r => r == T).Length;

        Console.WriteLine(R);
    }
}