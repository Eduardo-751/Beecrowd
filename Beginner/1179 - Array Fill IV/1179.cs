using System;

class URI
{

    static void Main(string[] args)
    {
        int[] oddV = new int[5];
        int[] evenV = new int[5];
        int oddIndex = 0;
        int evenIndex = 0;

        for (int i = 0; i < 15; i++)
        {
            int N = int.Parse(Console.ReadLine());

            if (N % 2 == 0)
            {
                evenV[evenIndex] = N;
                evenIndex++;

                if (evenIndex == 5)
                {
                    for (int j = 0; j < evenIndex; j++)
                    {
                        Console.WriteLine($"par[{j}] = {evenV[j]}");
                    }

                    evenIndex = 0;
                }
            }
            else
            {
                oddV[oddIndex] = N;
                oddIndex++;

                if (oddIndex == 5)
                {
                    for (int j = 0; j < oddIndex; j++)
                    {
                        Console.WriteLine($"impar[{j}] = {oddV[j]}");
                    }

                    oddIndex = 0;
                }
            }
        }
        for (int i = 0; i < oddIndex; i++)
        {
            Console.WriteLine($"impar[{i}] = {oddV[i]}");
        }

        for (int i = 0; i < evenIndex; i++)
        {
            Console.WriteLine($"par[{i}] = {evenV[i]}");
        }
    }
}