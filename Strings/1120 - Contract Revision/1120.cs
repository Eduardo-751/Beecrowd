using System;

class URI
{

    static void Main(string[] args)
    {
        int n, p;
        char D;
        string N, resposta;

        while (true)
        {
            string[] inputs = Console.ReadLine().Split(' ');
            D = char.Parse(inputs[0]);
            N = inputs[1];

            if (D == '0' && N == "0")
                break;

            p = 0;
            resposta = string.Empty;

            for (int i = 0; i < N.Length; i++)
            {
                if (N[i] != D)
                    resposta += N[i];
            }

            p = 0;
            n = resposta.Length;

            while (p < n)
            {
                if (resposta[p] != '0')
                    break;
                p++;
            }

            if (p == n)
            {
                Console.WriteLine("0");
            }
            else
            {
                resposta = resposta.Substring(p);
                Console.WriteLine(resposta);
            }
        }
    }
}