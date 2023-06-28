using System; 

class URI {
    static void Main(string[] args) { 

        int sequence = 0, aux = 0;
        int N = int.Parse(Console.ReadLine());
        for(int i=0; i<N; i++){
            int V = int.Parse(Console.ReadLine());
            if(V!=aux){
                aux=V;
                sequence++;
            }
        }
        Console.WriteLine($"{sequence}");
    }
}