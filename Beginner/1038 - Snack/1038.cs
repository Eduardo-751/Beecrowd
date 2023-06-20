using System;

class URI
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split(' ');
        int A = int.Parse(input[0]);
        int B = int.Parse(input[1]);

        switch (A)
        {
            case 1:
                Console.WriteLine($"Total: R$ {B * 4.0:0.00}");
                break;
            case 2:
                Console.WriteLine($"Total: R$ {B * 4.5:0.00}");
                break;
            case 3:
                Console.WriteLine($"Total: R$ {B * 5.0:0.00}");
                break;
            case 4:
                Console.WriteLine($"Total: R$ {B * 2.0:0.00}");
                break;
            case 5:
                Console.WriteLine($"Total: R$ {B * 1.5:0.00}");
                break;
        }
    }
}