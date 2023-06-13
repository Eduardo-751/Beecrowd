using System; 

class URI {

    static void Main(string[] args) {
        while (true)
        {
            string[] input = Console.ReadLine().Split(' ');
            int x1 = int.Parse(input[0]);
            int y1 = int.Parse(input[1]);
            int x2 = int.Parse(input[2]);
            int y2 = int.Parse(input[3]);

            if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
                break;

            int dx = Math.Abs(x2 - x1);
            int dy = Math.Abs(y2 - y1);

            if (dx == 0 && dy == 0)
                Console.WriteLine(0);
            else if (dx == dy || dx == 0 || dy == 0)
                Console.WriteLine(1);
            else
                Console.WriteLine(2);
        }
    }
}