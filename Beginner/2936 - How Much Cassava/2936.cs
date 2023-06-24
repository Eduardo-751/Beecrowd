using System;

class URI
{
    static void Main(string[] args)
    {
        int[] table = {300, 1500, 600, 1000, 150};
        int gramas = 225;

        for(int i = 0; i<5; i++){
            int aux = int.Parse(Console.ReadLine());
            gramas += table[i]*aux;
        }
        Console.WriteLine(gramas);
    }
}