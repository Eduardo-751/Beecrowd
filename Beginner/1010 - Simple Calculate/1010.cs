using System;

class URI
{
    static void Main(string[] args)
    {
        String[] input;
        input = Console.ReadLine().Trim().Split(' ');
        int qtd1 = int.Parse(input[1]);
        double valor1 = double.Parse(input[2]);

        input = Console.ReadLine().Trim().Split(' ');
        int qtd2 = int.Parse(input[1]);
        double valor2 = double.Parse(input[2]);

        double total = (qtd1 * valor1) + (qtd2 * valor2);
        Console.WriteLine($"VALOR A PAGAR: R$ {total:0.00}");
    }
}