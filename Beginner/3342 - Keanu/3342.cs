using System;

class URI
{
    static void Main(string[] args)
    {
        int N, cBranca, cPreta;
        N = int.Parse(Console.ReadLine());

        int totalCells = N * N;
        cPreta = totalCells / 2;
        cBranca = totalCells - cPreta;

        Console.WriteLine($"{cBranca} casas brancas e {cPreta} casas pretas");
    }
}