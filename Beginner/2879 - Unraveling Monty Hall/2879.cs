using System;

class URI
{
    static void Main(string[] args)
    {
        int num = int.Parse(Console.ReadLine());
        int B = 0;

        for (int i = 0; i < num; i++)
        {
            if (int.Parse(Console.ReadLine()) != 1)
                B++;
        }

        Console.WriteLine(B);
    }
}