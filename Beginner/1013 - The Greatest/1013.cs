using System;

class URI
{
    static void Main(string[] args)
    {
        String[] input = Console.ReadLine().Trim().Split(' ');
        int A = int.Parse(input[0]);
        int B = int.Parse(input[1]);
        int C = int.Parse(input[2]);

        int aux = (A + B + Math.Abs(A-B)) / 2;
        if (aux > C)
            Console.WriteLine($"{aux} eh o maior");
        else
            Console.WriteLine($"{C} eh o maior");  
    }
}