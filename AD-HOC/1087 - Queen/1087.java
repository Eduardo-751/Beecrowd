import java.util.Scanner;

class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        while (true) {
            String[] input = scanner.nextLine().split(" ");
            int x1 = Integer.parseInt(input[0]);
            int y1 = Integer.parseInt(input[1]);
            int x2 = Integer.parseInt(input[2]);
            int y2 = Integer.parseInt(input[3]);

            if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
                break;

            int dx = Math.abs(x2 - x1);
            int dy = Math.abs(y2 - y1);

            if (dx == 0 && dy == 0)
                System.out.println(0);
            else if (dx == dy || dx == 0 || dy == 0)
                System.out.println(1);
            else
                System.out.println(2);
        }
        scanner.close();
    }
}