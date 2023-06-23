import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        int[][] magicRanges = {
                { 0, 20, 30, 50 },
                { 0, 10, 25, 40 },
                { 0, 25, 55, 70 },
                { 0, 18, 38, 60 }
        };

        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();

        while (T > 0) {
            int w = scanner.nextInt();
            int h = scanner.nextInt();
            int x0 = scanner.nextInt();
            int y0 = scanner.nextInt();
            String magic = scanner.next();
            int N = scanner.nextInt();
            int Cx = scanner.nextInt();
            int Cy = scanner.nextInt();

            int Px, Py;

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

            double dist = Math.sqrt(Math.pow(Cx - Px, 2) + Math.pow(Cy - Py, 2));
            int damage = 0;

            switch (magic) {
                case "fire":
                    if (dist <= magicRanges[0][N])
                        damage = 200;
                    break;
                case "water":
                    if (dist <= magicRanges[1][N])
                        damage = 300;
                    break;
                case "earth":
                    if (dist <= magicRanges[2][N])
                        damage = 400;
                    break;
                case "air":
                    if (dist <= magicRanges[3][N])
                        damage = 100;
                    break;
            }

            System.out.println(damage);
            T--;
        }

        scanner.close();
    }
}