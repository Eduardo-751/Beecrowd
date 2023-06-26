using System; 

class URI {
    static void Main(string[] args) { 

        int P1, C1, P2, C2;

        string[] input = Console.ReadLine().Split(' ');
        P1 = int.Parse(input[0]);
        C1 = int.Parse(input[1]);
        P2 = int.Parse(input[2]);
        C2 = int.Parse(input[3]);

        if (P1 * C1 == P2 * C2)
            Console.WriteLine("0");
        else if (P1 * C1 < P2 * C2)
            Console.WriteLine("1");
        else
            Console.WriteLine("-1");
    }
}