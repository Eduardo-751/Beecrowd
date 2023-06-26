using System;

class URI
{
    static void Main(string[] args)
    {
        int dist=0;
        int N = int.Parse(Console.ReadLine());
        for(int i=0; i<N; i++){
            string[] input = Console.ReadLine().Split(' ');
            int T = int.Parse(input[0]);
            int V = int.Parse(input[1]);
            dist += T*V;
        }
        Console.WriteLine(dist);
    }
}