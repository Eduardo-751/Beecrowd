using System; 

class URI {
    static void Main(string[] args) { 

        int sec = int.Parse(Console.ReadLine());
        
        int hour = sec / 3600;
        sec %= 3600;
        int min = sec / 60;
        sec %= 60;

        Console.WriteLine($"{hour}:{min}:{sec}");
    }
}