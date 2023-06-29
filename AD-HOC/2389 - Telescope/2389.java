import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int A, N, F, views = 0;

        A = Integer.parseInt(scanner.nextLine());
        N = Integer.parseInt(scanner.nextLine());

        for (int i = 0; i < N; i++) {
            F = Integer.parseInt(scanner.nextLine());
            if (F*A >= 40000000)
                views++;
        }
        System.out.println(views);
        scanner.close();
    }
}