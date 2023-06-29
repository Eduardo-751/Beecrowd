using System;

class URI
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split(' ');
        int P = int.Parse(input[0]);
        int R = int.Parse(input[1]);

        if(P == 0)
            Console.WriteLine("C");
        else
            if(R == 0)
                Console.WriteLine("B");
            else
                Console.WriteLine("A");
    }
}