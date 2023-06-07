using System;

class URI
{
    static void Main(string[] args)
    {
        int N, i, i2, i3;
        char[] Pilha = new char[2048];
        int diamonds;

        N = int.Parse(Console.ReadLine());

        for (i = 0; i < N; i++)
        {
            string input = Console.ReadLine();
            Pilha = input.ToCharArray();
            diamonds = 0;

            for (i2 = 0; i2 < Pilha.Length; i2++)
            {
                if (Pilha[i2] == '<')
                {
                    for (i3 = i2; i3 < Pilha.Length; i3++)
                    {
                        if (Pilha[i3] == '>')
                        {
                            diamonds++;
                            Pilha[i3] = '.';
                            break;
                        }
                    }
                }
            }
            Console.WriteLine(diamonds);
        }
    }
}