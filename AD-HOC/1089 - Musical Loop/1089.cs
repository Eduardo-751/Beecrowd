using System; 

class URI {

    static void Main(string[] args) { 
        int N = 1;
        while (N != 0)
        {
            N = int.Parse(Console.ReadLine());
    
            if (N == 0)
                break;

            int[] samples = new int[N];

            samples = int.Parse(Console.ReadLine().Split(' '));

            int waves = 0;

            for (int i = 1; i < N - 1; i++)
            {
                if ((samples[i] > samples[i - 1] && samples[i] > samples[i + 1]) || (samples[i] < samples[i - 1] && samples[i] < samples[i + 1]))
                    waves++;
            }

            Console.WriteLine(waves);
        }
    }
}