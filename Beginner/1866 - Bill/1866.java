import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int C = scanner.nextInt();
        while (C-- > 0) {
            int N = scanner.nextInt();
            int result = N % 2 == 0 ? 0 : 1;
            System.out.println(result);
        }
        scanner.close();
    }
}