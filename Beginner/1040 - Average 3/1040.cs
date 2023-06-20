using System;

class URI
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split(' ');
        double N1 = double.Parse(input[0]);
        double N2 = double.Parse(input[1]);
        double N3 = double.Parse(input[2]);
        double N4 = double.Parse(input[3]);

        double media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10.01;

        Console.WriteLine($"Media: {media:0.0}");
        if (media >= 7)
            Console.WriteLine("Aluno aprovado.");
        else if (media < 4.995)
            Console.WriteLine("Aluno reprovado.");
        else
        {
            Console.WriteLine("Aluno em exame.");

            double exame = double.Parse(Console.ReadLine());
            Console.WriteLine($"Nota do exame: {exame:0.0}");
            double mediaF = (media + exame) / 2;
            if (mediaF >= 5)
                Console.WriteLine("Aluno aprovado.");
            else
                Console.WriteLine("Aluno reprovado.");

            Console.WriteLine($"Media final: {mediaF:0.0}");
        }
    }
}