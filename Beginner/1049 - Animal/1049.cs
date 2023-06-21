using System;

class URI
{
    static void Main(string[] args)
    {
        String input1 = Console.ReadLine();
        String input2 = Console.ReadLine();
        String input3 = Console.ReadLine();
        if (input1.Equals("vertebrado"))
        {
            if (input2.Equals("ave"))
            {
                if (input3.Equals("carnivoro"))
                    Console.WriteLine("aguia");
                else if (input3.Equals("onivoro"))
                    Console.WriteLine("pomba");
            }
            else if (input2.Equals("mamifero"))
            {
                if (input3.Equals("onivoro"))
                    Console.WriteLine("homem");
                else if (input3.Equals("herbivoro"))
                    Console.WriteLine("vaca");
            }
        }
        else if (input1.Equals("invertebrado"))
        {
            if (input2.Equals("inseto"))
            {
                if (input3.Equals("hematofago"))
                    Console.WriteLine("pulga");
                else if (input3.Equals("herbivoro"))
                    Console.WriteLine("lagarta");
            }
            else if (input2.Equals("anelideo"))
            {
                if (input3.Equals("hematofago"))
                    Console.WriteLine("sanguessuga");
                else if (input3.Equals("onivoro"))
                    Console.WriteLine("minhoca");
            }
        }
    }
}