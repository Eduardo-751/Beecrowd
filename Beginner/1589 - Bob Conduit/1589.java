import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        while (T-- > 0) {
            int R1 = scanner.nextInt();
            int R2 = scanner.nextInt();
            System.out.println(R1 + R2);
        }
        scanner.close();
    }
}