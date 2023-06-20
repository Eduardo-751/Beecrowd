using System; 

class URI {

    static void Main(string[] args) { 

        string[] input = Console.ReadLine().Split(' ');
        int Start = int.Parse((input[0]*60)+input[1]);
        int End = int.Parse((input[2]*60)+input[3]);

        if(End<=Start)
            End+=1.440;

        Console.WriteLine($"O JOGO DUROU { (End-Start)/60 } HORA(S) E { (End-Start)%60 } MINUTO(S)");
    }
}