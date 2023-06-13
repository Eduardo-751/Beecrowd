using System;

class URI
{

    static void Main(string[] args)
    {
        string line;
        while ((line = Console.ReadLine()) != null)
        {
            string[] values = line.Split(' ');
            int v = int.Parse(values[0]);
            int t = int.Parse(values[1]);
            int s = v * (2 * t);
            Console.WriteLine(s);
        }
    }
}