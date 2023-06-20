using System;

class URI
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split(' ');
        double[] lados = new double[] {double.Parse(input[0]), double.Parse(input[1]), double.Parse(input[2])};

        Array.Sort(lados);
        Array.Reverse(lados);

        if(lados[0] >= lados[1]+lados[2])
            Console.WriteLine("NAO FORMA TRIANGULO");

        else{
            if (lados[0]*lados[0] == lados[1]*lados[1] + lados[2]*lados[2])
                Console.WriteLine("TRIANGULO RETANGULO");
            else if (lados[0]*lados[0] > lados[1]*lados[1] + lados[2]*lados[2])
                Console.WriteLine("TRIANGULO OBTUSANGULO");
            else
                Console.WriteLine("TRIANGULO ACUTANGULO");

            if(lados[0] == lados[1] && lados[0] == lados[2])
                Console.WriteLine("TRIANGULO EQUILATERO");
            else if (lados[0] == lados[1] || lados[0] == lados[2] || lados[1] == lados[2])
                Console.WriteLine("TRIANGULO ISOSCELES");
        }
    }
}