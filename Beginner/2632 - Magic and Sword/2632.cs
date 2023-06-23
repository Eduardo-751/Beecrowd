using System;

class URI
{
    static void Main(string[] args)
    {

        int[] fire = { 0, 20, 30, 50 };
        int[] water = { 0, 10, 25, 40 };
        int[] earth = { 0, 25, 55, 70 };
        int[] air = { 0, 18, 38, 60 };

        int T = int.Parse(Console.ReadLine());
        while (T > 0)
        {
            int w, h, x0, y0, N, Cx, Cy, Px, Py;
            string magic;

            string[] dimensions = Console.ReadLine().Split(' ');
            w = int.Parse(dimensions[0]);
            h = int.Parse(dimensions[1]);
            x0 = int.Parse(dimensions[2]);
            y0 = int.Parse(dimensions[3]);

            string[] input = Console.ReadLine().Split(' ');
            magic = input[0];
            N = int.Parse(input[1]);
            Cx = int.Parse(input[2]);
            Cy = int.Parse(input[3]);

            if (Cx < x0)
                Px = x0;
            else if (Cx > x0 + w)
                Px = x0 + w;
            else
                Px = Cx;

            if (Cy < y0)
                Py = y0;
            else if (Cy > y0 + h)
                Py = y0 + h;
            else
                Py = Cy;

            double dist = Math.Sqrt(Math.Pow(Cx - Px, 2) + Math.Pow(Cy - Py, 2));
            int damage = 0;

            if (magic == "fire")
            {
                if (dist <= fire[N])
                    damage = 200;
            }
            else if (magic == "water")
            {
                if (dist <= water[N])
                    damage = 300;
            }
            else if (magic == "earth")
            {
                if (dist <= earth[N])
                    damage = 400;
            }
            else if (magic == "air")
            {
                if (dist <= air[N])
                    damage = 100;
            }

            Console.WriteLine(damage);
            T--;
        }
    }
}