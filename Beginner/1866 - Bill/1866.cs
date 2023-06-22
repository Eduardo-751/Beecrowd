using System; 

class URI {
    static void Main(string[] args) { 
        int C = int.Parse(Console.ReadLine());
        while (C-- > 0)
        {
            int N = int.Parse(Console.ReadLine());
            int result = N % 2 == 0 ? 0 : 1;
            Console.WriteLine(result);
        }
    }
}