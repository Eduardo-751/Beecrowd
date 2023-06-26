using System; 

class URI {
    static void Main(string[] args) { 

        int N, L, C, broken = 0;
        
        N = int.Parse(Console.ReadLine());

        for (int i = 0; i < N; i++)
        {
            string[] inputs = Console.ReadLine().Split(' ');
            L = int.Parse(inputs[0]);
            C = int.Parse(inputs[1]);

            if (C < L)
                broken += C;
        }

        Console.WriteLine(broken);
    }
}