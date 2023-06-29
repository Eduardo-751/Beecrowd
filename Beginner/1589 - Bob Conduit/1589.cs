using System; 

class URI {
    static void Main(string[] args) { 
        int T = int.Parse(Console.ReadLine());
        while (T-- > 0)
        {
            string[] input = Console.ReadLine().Split(' ');
            int R1 = int.Parse(input[0]);
            int R2 = int.Parse(input[1]);
            Console.WriteLine(R1+R2);
        }
    }
}