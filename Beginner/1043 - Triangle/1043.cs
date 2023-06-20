using System;

class URI
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split(' ');
        double A = double.Parse(input[0]);
        double B = double.Parse(input[1]);
        double C = double.Parse(input[2]);

        if(A<B+C && B<A+C && C<A+B)
            Console.WriteLine($"Perimetro = {A+B+C:0.0}");
        else
            Console.WriteLine($"Area = {(A+B)*C/2:0.0}");
    }
}