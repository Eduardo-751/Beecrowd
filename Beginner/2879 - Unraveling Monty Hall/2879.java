import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        int B = 0;

        for (int i = 0; i < num; i++) {
            if (scanner.nextInt() != 1)
                B++;
        }

        System.out.println(B);
        scanner.close();
    }
}