using System;

class URI
{
    static void Main(string[] args)
    {
        int N, F1, F2, MDC;
        N = int.Parse(Console.ReadLine());
        while (N > 0)
        {
            string[] inputs = Console.ReadLine().Split(' ');
            F1 = int.Parse(inputs[0]);
            F2 = int.Parse(inputs[1]);
            do
            {
                MDC = F1 % F2;
                F1 = F2;
                F2 = MDC;
            } while (MDC != 0);
            Console.WriteLine(F1);
            N--;
        }
    }
}