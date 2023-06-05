using System;

class URI
{
    static void Main(string[] args)
    {
        String[] input = Console.ReadLine().Trim().Split(' ');
        Double A = double.Parse(input[0]);
        Double B = double.Parse(input[1]);
        Double C = double.Parse(input[2]);

        double triangulo = (A*C)/2;
        double circulo = (C*C)*3.14159;
        double trapezio = ((A+B)*C)/2;
        double quadrado = B*B;
        double retangulo = A*B;

        Console.WriteLine($"TRIANGULO: {triangulo:0.000}\nCIRCULO: {circulo:0.000}\nTRAPEZIO: {trapezio:0.000}\nQUADRADO: {quadrado:0.000}\nRETANGULO: {retangulo:0.000}");  
    }
}