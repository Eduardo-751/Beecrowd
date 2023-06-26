import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int N, L, C, broken = 0;

        N = Integer.parseInt(scanner.nextLine());

        for (int i = 0; i < N; i++) {
            String[] inputs = scanner.nextLine().split(" ");
            L = Integer.parseInt(inputs[0]);
            C = Integer.parseInt(inputs[1]);

            if (C < L)
                broken += C;
        }

        System.out.println(broken);
        scanner.close();
    }
}