using System; 

class URI {

    static void Main(string[] args) { 

        int Ca, Ba, Pa, Cr, Br, Pr;

        string[] input = Console.ReadLine().Split(' ');
        Ca = int.Parse(input[0]);
        Ba = int.Parse(input[1]);
        Pa = int.Parse(input[2]);

        
        input = Console.ReadLine().Split(' ');
        Cr = int.Parse(input[0]);
        Br = int.Parse(input[1]);
        Pr = int.Parse(input[2]);

        int C = Cr-Ca;
        int B = Br-Ba;
        int P = Pr-Pa;

        int R = (C > 0 ? C : 0) + (B > 0 ? B : 0) + (P > 0 ? P : 0);

        Console.WriteLine(R);

    }
}