import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        int P1, C1, P2, C2;

        Scanner scanner = new Scanner(System.in);
        P1 = scanner.nextInt();
        C1 = scanner.nextInt();
        P2 = scanner.nextInt();
        C2 = scanner.nextInt();

        if (P1 * C1 == P2 * C2)
            System.out.println("0");
        else if (P1 * C1 < P2 * C2)
            System.out.println("1");
        else
            System.out.println("-1");

        scanner.close();
    }
}