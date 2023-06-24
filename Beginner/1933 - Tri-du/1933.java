import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int A = scanner.nextInt();
        int B = scanner.nextInt();
        if (A > B)
            System.out.println(A);
        else
            System.out.println(B);
        scanner.close();
    }
}