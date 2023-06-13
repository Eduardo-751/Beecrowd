using System;

class URI
{
    static void Main(string[] args)
    {
        int N = 1;
        while (N != 0)
        {
            N = int.Parse(Console.ReadLine());

            if (N == 0)
                break;

            int[] samples = new int[N + 2];
            string[] input = Console.ReadLine().Split(' ');
            for (int i = 0; i < N; i++)
            {
                samples[i] = int.Parse(input[i]);
            }
            samples[N] = int.Parse(input[0]);
            samples[N + 1] = int.Parse(input[1]);

            int waves = 0;

            for (int i = 1; i < N + 2 - 1; i++)
            {
                if ((samples[i] > samples[i - 1] && samples[i] > samples[i + 1]) || (samples[i] < samples[i - 1] && samples[i] < samples[i + 1]))
                    waves++;
            }

            Console.WriteLine(waves);
        }
    }
}